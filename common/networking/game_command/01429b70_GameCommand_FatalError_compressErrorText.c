// addr: 0x01429b70
// name: GameCommand_FatalError_compressErrorText
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandFatalError.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall GameCommand_FatalError_compressErrorText(int param_1,void *param_2)

{
  void **outData;
  void *pvVar1;
  void *dest;
  int iVar2;
  int *outSize;
  void *pvStack_10;
  longlong lStack_c;
  
                    /* Prepares a fatal-error payload by copying the error text, computing a zlib
                       destination size, compressing it into the buffer at offset 0x88, and storing
                       the compressed size at 0x90. Evidence is GameCommandFatalError.cpp, the 'res
                       == Z_OK' assertion, zlib-style return check, and memcpy/allocation of the
                       compressed buffer. */
  if (param_2 == (void *)0x0) {
    FUN_012f5a60(&DAT_018e78cc,"..\\common\\networking\\game_command\\GameCommandFatalError.cpp",
                 0x37);
  }
  Game_setFatalErrorSerializationEnabled(param_2,'\0');
  outSize = (int *)0x0;
  pvVar1 = (void *)(**(code **)(*(int *)((int)param_2 + 0x10) + 0x28))();
  outData = (void **)(param_1 + 0x8c);
  PacketBuffer_getDataAndSize(pvVar1,&pvStack_10,outData,outSize);
  pvVar1 = Mem_Alloc((int)*outData + 1);
  _memcpy(pvVar1,pvStack_10,(size_t)*outData);
  lStack_c = (longlong)
             ROUND(_DAT_0180bfd0 * (double)(int)*outData + _DAT_018d43f8 + (double)(int)*outData);
  *(long *)(param_1 + 0x90) = (int)lStack_c;
  dest = Mem_Alloc((int)lStack_c + 1);
  *(void **)(param_1 + 0x88) = dest;
  iVar2 = zlib_compress(dest,(long *)(param_1 + 0x90),pvVar1,(long)*outData);
  if (iVar2 != 0) {
    FUN_012f5a60("res == Z_OK","..\\common\\networking\\game_command\\GameCommandFatalError.cpp",
                 0x43);
  }
                    /* WARNING: Subroutine does not return */
  _free(pvVar1);
}

