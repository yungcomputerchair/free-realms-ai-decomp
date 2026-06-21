// addr: 0x00d52f20
// name: TiXmlElement_ctorCopy
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall TiXmlElement_ctorCopy(undefined4 *param_1,void *param_2)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a TiXmlElement and copies another element's attributes and
                       children into it. Evidence: initializes TiXmlElement::vftable and attribute
                       set, then invokes TiXmlElement_CopyTo. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01616fd3;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  TiXmlNode_ctor(param_1,1);
  local_4 = 0;
  *param_1 = TiXmlElement::vftable;
  FUN_00d52670(uVar1);
  local_4 = CONCAT31(local_4._1_3_,1);
  param_1[7] = 0;
  param_1[6] = 0;
  TiXmlElement_CopyTo(param_2,param_1);
  ExceptionList = local_c;
  return param_1;
}

