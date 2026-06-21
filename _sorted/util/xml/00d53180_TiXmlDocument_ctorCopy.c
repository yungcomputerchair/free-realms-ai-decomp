// addr: 0x00d53180
// name: TiXmlDocument_ctorCopy
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall TiXmlDocument_ctorCopy(undefined4 *param_1,void *param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a TiXmlDocument and copies another document's content and state
                       into it. Evidence: initializes TiXmlDocument fields and then calls
                       TiXmlDocument_CopyTo. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01617063;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  TiXmlNode_ctor(param_1,0);
  *param_1 = TiXmlDocument::vftable;
  param_1[0xd] = &DAT_01bf2c00;
  local_4 = 1;
  param_1[0x10] = 0xffffffff;
  param_1[0xf] = 0xffffffff;
  TiXmlDocument_CopyTo(param_2,param_1);
  ExceptionList = local_c;
  return param_1;
}

