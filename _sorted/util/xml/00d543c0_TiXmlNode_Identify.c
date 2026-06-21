// addr: 0x00d543c0
// name: TiXmlNode_Identify
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall TiXmlNode_Identify(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  void *this;
  void *pvVar4;
  int iVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Identifies the next TinyXML node type from markup and allocates the
                       corresponding declaration, comment, text/CDATA, unknown, or element node.
                       Evidence: checks '<?xml', comment/CDATA/doctype-like prefixes, alpha element
                       names, and constructs the matching TiXml* node class. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016172c2;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  pcVar3 = (char *)FUN_00d53de0(param_2,param_3,uVar2);
  if (((pcVar3 == (char *)0x0) || (*pcVar3 == '\0')) || (*pcVar3 != '<')) {
    ExceptionList = local_c;
    return 0;
  }
  this = (void *)TiXmlNode_FirstChild();
  pcVar3 = (char *)FUN_00d53de0(pcVar3,param_3,uVar2);
  if (pcVar3 == (char *)0x0) {
    ExceptionList = local_c;
    return 0;
  }
  if (*pcVar3 == '\0') {
    ExceptionList = local_c;
    return 0;
  }
  cVar1 = FUN_00d53f30(pcVar3,"<?xml",1,param_3);
  if (cVar1 == '\0') {
    cVar1 = FUN_00d53f30(pcVar3,&DAT_0184022c,0,param_3);
    if (cVar1 == '\0') {
      cVar1 = FUN_00d53f30(pcVar3,&DAT_0184021c,0,param_3);
      if (cVar1 != '\0') {
        pvVar4 = Mem_Alloc(0x30);
        local_4 = 2;
        if (pvVar4 == (void *)0x0) {
          iVar5 = 0;
          DAT_0000002c = 1;
        }
        else {
          iVar5 = TiXmlText_ctorWithValue(&DAT_0175b400);
          *(undefined1 *)(iVar5 + 0x2c) = 1;
        }
        goto LAB_00d545a7;
      }
      cVar1 = FUN_00d53f30(pcVar3,&DAT_01840720,0,param_3);
      if (cVar1 == '\0') {
        iVar5 = TiXmlBase_IsAlpha(pcVar3[1]);
        if ((iVar5 == 0) && (pcVar3[1] != '_')) {
          pvVar4 = Mem_Alloc(0x2c);
          local_4 = 5;
          if (pvVar4 != (void *)0x0) {
            iVar5 = TiXmlUnknown_ctor();
            goto LAB_00d545a7;
          }
        }
        else {
          pvVar4 = Mem_Alloc(0x50);
          local_4 = 4;
          if (pvVar4 != (void *)0x0) {
            iVar5 = FUN_00d52e70(&DAT_0175b400);
            goto LAB_00d545a7;
          }
        }
      }
      else {
        pvVar4 = Mem_Alloc(0x2c);
        local_4 = 3;
        if (pvVar4 != (void *)0x0) {
          iVar5 = TiXmlUnknown_ctor();
          goto LAB_00d545a7;
        }
      }
    }
    else {
      pvVar4 = Mem_Alloc(0x2c);
      local_4 = 1;
      if (pvVar4 != (void *)0x0) {
        iVar5 = TiXmlComment_ctorMinimal();
        goto LAB_00d545a7;
      }
    }
  }
  else {
    pvVar4 = Mem_Alloc(0x38);
    local_4 = 0;
    if (pvVar4 != (void *)0x0) {
      iVar5 = TiXmlDeclaration_ctor();
      goto LAB_00d545a7;
    }
  }
  iVar5 = 0;
LAB_00d545a7:
  local_4 = 0xffffffff;
  if (iVar5 != 0) {
    *(undefined4 *)(iVar5 + 0x10) = param_1;
    ExceptionList = local_c;
    return iVar5;
  }
  if (this != (void *)0x0) {
    TiXmlDocument_SetError(this,3,(char *)0x0,0,(char *)0x0);
    ExceptionList = local_c;
    return 0;
  }
  ExceptionList = local_c;
  return 0;
}

