// addr: 0x00d545f0
// name: TiXmlElement_ReadValue
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * TiXmlElement_ReadValue(char *param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  void *this;
  char *pcVar2;
  void *pvVar3;
  int *piVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Parses an element's content, creating/linking child nodes for nested markup
                       or text nodes until an end tag is encountered. Evidence: calls
                       TiXmlNode_Identify for '<' children, constructs TiXmlText for text content,
                       links children, and sets TinyXML parse errors. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016172eb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = (void *)TiXmlNode_FirstChild(DAT_01b839d8 ^ (uint)&stack0xffffffdc);
  pcVar2 = (char *)FUN_00d53de0(param_1,param_3);
  do {
    if (pcVar2 == (char *)0x0) {
      if (this != (void *)0x0) {
        TiXmlDocument_SetError(this,6,(char *)0x0,0,param_3);
      }
      ExceptionList = local_c;
      return (char *)0x0;
    }
    if (*pcVar2 == '\0') {
      ExceptionList = local_c;
      return pcVar2;
    }
    if (*pcVar2 == '<') {
      cVar1 = FUN_00d53f30(pcVar2,&DAT_01840214,0,param_3);
      if (cVar1 != '\0') {
        ExceptionList = local_c;
        return pcVar2;
      }
      piVar4 = (int *)TiXmlNode_Identify(pcVar2,param_3);
      if (piVar4 == (int *)0x0) {
        ExceptionList = local_c;
        return (char *)0x0;
      }
      param_1 = (char *)(**(code **)(*piVar4 + 8))(pcVar2,param_2,param_3);
LAB_00d54723:
      TiXmlNode_LinkEndChild(piVar4);
    }
    else {
      pvVar3 = Mem_Alloc(0x30);
      piVar4 = (int *)0x0;
      local_4 = 0;
      if (pvVar3 != (void *)0x0) {
        piVar4 = (int *)TiXmlText_ctorWithValue(&DAT_0175b400);
      }
      local_4 = 0xffffffff;
      if (piVar4 == (int *)0x0) {
        if (this != (void *)0x0) {
          TiXmlDocument_SetError(this,3,(char *)0x0,0,param_3);
        }
        ExceptionList = local_c;
        return (char *)0x0;
      }
      if (s___AVTexture_EcoData_GameRuntimeT_01b81a58[0x29] != '\0') {
        param_1 = pcVar2;
      }
      param_1 = (char *)(**(code **)(*piVar4 + 8))(param_1,param_2,param_3);
      cVar1 = FUN_00d54120();
      if (cVar1 == '\0') goto LAB_00d54723;
      (**(code **)*piVar4)(1);
    }
    pcVar2 = (char *)FUN_00d53de0(param_1,param_3);
  } while( true );
}

