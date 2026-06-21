// addr: 0x00d52cc0
// name: TiXmlText_ctorWithValue
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall TiXmlText_ctorWithValue(undefined4 *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a TiXmlText node with node type 4, installs TiXmlText::vftable,
                       copies the text value, and clears the CDATA flag. Evidence: direct vtable
                       assignment and string copy into node value. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01616f68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  TiXmlNode_ctor(param_1,4);
  local_4 = 0;
  *param_1 = TiXmlText::vftable;
  pcVar2 = param_2;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00d53650(param_2,(int)pcVar2 - (int)(param_2 + 1));
  *(undefined1 *)(param_1 + 0xb) = 0;
  ExceptionList = local_c;
  return param_1;
}

