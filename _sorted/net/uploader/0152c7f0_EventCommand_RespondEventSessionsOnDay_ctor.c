// addr: 0x0152c7f0
// name: EventCommand_RespondEventSessionsOnDay_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * EventCommand_RespondEventSessionsOnDay_ctor(void) */

void * EventCommand_RespondEventSessionsOnDay_ctor(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 *in_ECX;
  undefined1 local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs EventCommand_RespondEventSessionsOnDay, initializes base command
                       state and installs the EventCommand_RespondEventSessionsOnDay vtable.
                       Evidence is the direct EventCommand_RespondEventSessionsOnDay::vftable
                       assignment. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016ba6a3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_01447280(DAT_01b839d8 ^ (uint)&stack0xffffffd8);
  *in_ECX = EventCommand_RespondEventSessionsOnDay::vftable;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  local_4 = 1;
  uVar1 = in_ECX[7];
  if (uVar1 < (uint)in_ECX[6]) {
    FUN_00d83c2d();
  }
  uVar2 = in_ECX[6];
  if ((uint)in_ECX[7] < uVar2) {
    FUN_00d83c2d();
  }
  FUN_0041f5e6(local_14,in_ECX + 5,uVar2,in_ECX + 5,uVar1);
  ExceptionList = local_c;
  return in_ECX;
}

