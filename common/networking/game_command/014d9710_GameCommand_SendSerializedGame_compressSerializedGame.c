// addr: 0x014d9710
// name: GameCommand_SendSerializedGame_compressSerializedGame
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandSendSerializedGame.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: void GameCommandSendSerializedGame_compressSerializedGame(void * this) */

void __fastcall GameCommand_SendSerializedGame_compressSerializedGame(void *this)

{
  void **outData;
  void *_Dst;
  void *dest;
  int iVar1;
  int *unaff_EDI;
  void *in_stack_00000004;
  void *local_c;
  longlong local_8;
  
                    /* Compresses the serialized-game buffer from the string-like field at +0x28
                       into a newly allocated buffer at +0x24, storing compressed length at +0x2c
                       and asserting zlib success. Evidence is the 'res == Z_OK' assert in
                       GameCommandSendSerializedGame.cpp. */
  outData = (void **)((int)this + 0x28);
  PacketBuffer_getDataAndSize(in_stack_00000004,&local_c,outData,unaff_EDI);
  _Dst = Mem_Alloc((int)*outData + 1);
  _memcpy(_Dst,local_c,(size_t)*outData);
  local_8 = (longlong)
            ROUND(_DAT_0180bfd0 * (double)(int)*outData + _DAT_018d43f8 + (double)(int)*outData);
  *(long *)((int)this + 0x2c) = (int)local_8;
  dest = Mem_Alloc((int)local_8 + 1);
  *(void **)((int)this + 0x24) = dest;
  iVar1 = zlib_compress(dest,(long *)((int)this + 0x2c),_Dst,(long)*outData);
  if (iVar1 != 0) {
    FUN_012f5a60("res == Z_OK",
                 "..\\common\\networking\\game_command\\GameCommandSendSerializedGame.cpp",0x4f);
  }
                    /* WARNING: Subroutine does not return */
  _free(_Dst);
}

