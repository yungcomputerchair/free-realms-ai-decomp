// addr: 0x01455a40
// name: CWActionPlayNode_dtor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall CWActionPlayNode_dtor(undefined4 *param_1)

{
  uint uVar1;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor/cleanup for CWActionPlayNode; installs vtable and runs base node
                       cleanup. */
  puStack_8 = &LAB_0169c078;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&local_10;
  ExceptionList = &local_c;
  *param_1 = CWActionPlayNode::vftable;
  local_4 = 0xffffffff;
  local_10 = param_1;
  ActionPlayNode_dtor(uVar1);
  ExceptionList = local_c;
  return;
}

