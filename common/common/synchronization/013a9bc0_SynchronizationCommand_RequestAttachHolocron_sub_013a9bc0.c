// addr: 0x013a9bc0
// name: SynchronizationCommand_RequestAttachHolocron_sub_013a9bc0
// subsystem: common/common/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall SynchronizationCommand_RequestAttachHolocron_sub_013a9bc0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Identifies a SynchronizationCommand_RequestAttachHolocron sub_013a9bc0
                       routine. Evidence: vftable/call-shape evidence in ctx. */
  puStack_8 = &LAB_016863e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = SynchronizationCommand_RequestAttachHolocron::vftable;
  local_4 = 0xffffffff;
  SynchronizationCommand_dtor(param_1);
  ExceptionList = local_c;
  return;
}

