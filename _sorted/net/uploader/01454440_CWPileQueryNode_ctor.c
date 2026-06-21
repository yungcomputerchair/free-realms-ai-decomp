// addr: 0x01454440
// name: CWPileQueryNode_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall CWPileQueryNode_ctor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Identifies a CWPileQueryNode ctor routine. Evidence: vftable/call-shape
                       evidence in ctx. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169bca8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_01494390(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *param_1 = CWPileQueryNode::vftable;
  ExceptionList = local_c;
  return param_1;
}

