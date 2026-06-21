// addr: 0x01429aa0
// name: GameCommand_FatalError_decompressMessage
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandFatalError.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_FatalError_decompressMessage(void * this) */

void __fastcall GameCommand_FatalError_decompressMessage(void *this)

{
  uint size;
  void *outBuffer;
  int iVar1;
  void *extraout_EAX;
  void *this_00;
  uint local_14;
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Inflates the compressed fatal-error payload from fields around +0x88/+0x90
                       into an allocated buffer, asserts zlib success, then wraps/assigns the
                       decompressed bytes before freeing the buffer. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0169571b;
  local_c = ExceptionList;
  size = DAT_01b839d8 ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  outBuffer = Mem_Alloc(*(int *)((int)this + 0x8c) + 1);
  local_14 = *(int *)((int)this + 0x8c) + 1;
  iVar1 = Zlib_inflateBuffer(outBuffer,&local_14,*(void **)((int)this + 0x88),
                             *(int *)((int)this + 0x90));
  this_00 = (void *)0x0;
  if (iVar1 != 0) {
    FUN_012f5a60("zres == Z_OK","..\\common\\networking\\game_command\\GameCommandFatalError.cpp",
                 0x2d);
  }
  pvStack_10 = Mem_Alloc(0x14);
  uStack_4 = 0;
  if (pvStack_10 != (void *)0x0) {
    PacketBuffer_init(pvStack_10);
    this_00 = extraout_EAX;
  }
  uStack_4 = 0xffffffff;
  RawBuffer_assign(this_00,outBuffer,*(void **)((int)this + 0x8c),size);
                    /* WARNING: Subroutine does not return */
  _free(outBuffer);
}

