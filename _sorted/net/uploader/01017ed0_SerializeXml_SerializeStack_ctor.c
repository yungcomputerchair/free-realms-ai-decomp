// addr: 0x01017ed0
// name: SerializeXml_SerializeStack_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall SerializeXml_SerializeStack_ctor(undefined4 *param_1)

{
                    /* Constructs a SerializeXml serialization stack backed by
                       SoeUtil::List<SerializeXml::SerializeStackElement,32> and initializes the
                       embedded list storage. Evidence is the list vtable assignment. */
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = SoeUtil::List<SerializeXml::SerializeStackElement,32>::vftable;
  FUN_010169c0(param_1 + 4);
  return param_1;
}

