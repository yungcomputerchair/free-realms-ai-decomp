// addr: 0x014534f0
// name: CWValueNode_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall CWValueNode_ctor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Identifies a CWValueNode ctor routine. Evidence: vftable/call-shape evidence
                       in ctx. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169ba18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_014882c0(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *param_1 = CWValueNode::vftable;
  ExceptionList = local_c;
  return param_1;
}

