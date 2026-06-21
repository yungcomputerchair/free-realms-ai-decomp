// addr: 0x00d51590
// name: TiXmlNode_LinkEndChild
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall TiXmlNode_LinkEndChild(int param_1,undefined4 *param_2)

{
  int iVar1;
  void *this;
  char *errorLocation;
  int encoding_;
  char *sourceStart;
  
                    /* Links a child node at the end of a TinyXML node's child list, setting
                       parent/prev/next links and reporting an error for invalid children. Evidence:
                       updates parent and last-child fields, and calls TiXmlDocument_SetError on
                       failure. */
  if (param_2[5] == 0) {
    (**(code **)*param_2)(1);
    iVar1 = TiXmlNode_FirstChild();
    if (iVar1 != 0) {
      sourceStart = (char *)0x0;
      encoding_ = 0;
      errorLocation = (char *)0x0;
      iVar1 = 0x10;
      this = (void *)TiXmlNode_FirstChild();
      TiXmlDocument_SetError(this,iVar1,errorLocation,encoding_,sourceStart);
    }
    return (undefined4 *)0x0;
  }
  param_2[4] = param_1;
  param_2[9] = *(undefined4 *)(param_1 + 0x1c);
  param_2[10] = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    *(undefined4 **)(*(int *)(param_1 + 0x1c) + 0x28) = param_2;
    *(undefined4 **)(param_1 + 0x1c) = param_2;
    return param_2;
  }
  *(undefined4 **)(param_1 + 0x18) = param_2;
  *(undefined4 **)(param_1 + 0x1c) = param_2;
  return param_2;
}

