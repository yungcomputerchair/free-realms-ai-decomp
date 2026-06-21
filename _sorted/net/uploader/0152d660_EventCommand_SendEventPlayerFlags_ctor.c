// addr: 0x0152d660
// name: EventCommand_SendEventPlayerFlags_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * EventCommand_SendEventPlayerFlags_ctor(void) */

void * EventCommand_SendEventPlayerFlags_ctor(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs EventCommand_SendEventPlayerFlags, initializes base command state
                       and installs the EventCommand_SendEventPlayerFlags vtable. Evidence is the
                       direct EventCommand_SendEventPlayerFlags::vftable assignment. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016ba973;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_01447280(DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  local_4 = 0;
  *in_ECX = EventCommand_SendEventPlayerFlags::vftable;
  FUN_005258fb();
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_004ef7fa(*(undefined4 *)(in_ECX[3] + 4));
  *(undefined4 *)(in_ECX[3] + 4) = in_ECX[3];
  in_ECX[4] = 0;
  *(undefined4 *)in_ECX[3] = in_ECX[3];
  *(undefined4 *)(in_ECX[3] + 8) = in_ECX[3];
  ExceptionList = local_c;
  return in_ECX;
}

