// addr: 0x00890570
// name: VisibilityObject_ctor
// subsystem: common/world/scene
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall VisibilityObject_ctor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Identifies a VisibilityObject ctor routine. Evidence: vftable/call-shape
                       evidence in ctx. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01579188;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Deep_VisibilityObjectDPVSInterface_ctor(param_1);
  *param_1 = Deep::VisibilityObject::vftable;
  param_1[5] = 0;
  param_1[6] = 0;
  ExceptionList = local_c;
  return param_1;
}

