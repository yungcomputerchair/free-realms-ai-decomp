// addr: 0x00d54b90
// name: TiXmlElement_Parse
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * __thiscall
TiXmlElement_Parse(int param_1,undefined4 param_2,undefined4 *param_3,int *param_4)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  void *this;
  char *errorLocation;
  int *attribute;
  undefined4 *extraout_ECX;
  undefined4 *puVar5;
  int iVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Parses a TinyXML element start tag, attributes, empty-element endings, nested
                       content, and matching end tags while recording parse errors. Evidence: reads
                       the element name, creates TiXmlAttribute objects, checks duplicates, calls
                       TiXmlElement_ReadValue, and validates the closing tag. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01617318;
  local_c = ExceptionList;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffffdc;
  ExceptionList = &local_c;
  pcVar4 = (char *)FUN_00d53de0(param_2,param_4,uVar3);
  this = (void *)TiXmlNode_FirstChild();
  if ((pcVar4 == (char *)0x0) || (*pcVar4 == '\0')) {
    if (this == (void *)0x0) {
      ExceptionList = local_c;
      return (char *)0x0;
    }
    pcVar4 = (char *)0x0;
    param_3 = (undefined4 *)0x0;
  }
  else {
    puVar5 = param_3;
    if (param_3 != (undefined4 *)0x0) {
      FUN_00d53bc0(pcVar4,param_4);
      *(undefined4 *)(param_1 + 4) = *extraout_ECX;
      *(undefined4 *)(param_1 + 8) = extraout_ECX[1];
      puVar5 = extraout_ECX;
    }
    if (*pcVar4 == '<') {
      pcVar4 = (char *)FUN_00d53de0(pcVar4 + 1,param_4,uVar3);
      errorLocation = (char *)FUN_00d53ea0(pcVar4,(int *)(param_1 + 0x20),param_4);
      if ((errorLocation != (char *)0x0) && (*errorLocation != '\0')) {
        FUN_009f9af0(&DAT_01840214);
        puVar5 = *(undefined4 **)(param_1 + 0x20);
        local_4 = 0;
        FUN_00d53740(puVar5 + 2,*puVar5);
        FUN_00d50610(&DAT_017cdb88);
        while( true ) {
          if (*errorLocation == '\0') {
            local_4 = 0xffffffff;
            if (param_4 != &DAT_01bf2c00) {
                    /* WARNING: Subroutine does not return */
              _free(param_4);
            }
            ExceptionList = local_c;
            return errorLocation;
          }
          pcVar4 = (char *)FUN_00d53de0(errorLocation,param_4);
          if ((pcVar4 == (char *)0x0) || (cVar2 = *pcVar4, cVar2 == '\0')) break;
          if (cVar2 == '/') {
            errorLocation = pcVar4 + 1;
            if (*errorLocation == '>') {
              local_4 = 0xffffffff;
              if (param_4 != &DAT_01bf2c00) {
                    /* WARNING: Subroutine does not return */
                _free(param_4);
              }
              ExceptionList = local_c;
              return pcVar4 + 2;
            }
            if (this == (void *)0x0) goto LAB_00d54d6c;
            iVar6 = 8;
            goto LAB_00d54d67;
          }
          if (cVar2 == '>') {
            errorLocation = (char *)TiXmlElement_ReadValue(pcVar4 + 1,param_3,param_4);
            if ((errorLocation == (char *)0x0) || (*errorLocation == '\0')) goto LAB_00d54d6c;
            cVar2 = FUN_00d53f30(errorLocation,param_4 + 2,0,param_4);
            if (cVar2 != '\0') {
              local_4 = 0xffffffff;
              if (param_4 != &DAT_01bf2c00) {
                    /* WARNING: Subroutine does not return */
                _free(param_4);
              }
              ExceptionList = local_c;
              return errorLocation + *param_4;
            }
            if (this == (void *)0x0) goto LAB_00d54d6c;
            iVar6 = 9;
            goto LAB_00d54d67;
          }
          attribute = Mem_Alloc(0x24);
          if (attribute == (int *)0x0) {
            if (this == (void *)0x0) goto LAB_00d54d6c;
            iVar6 = 3;
            goto LAB_00d54d67;
          }
          attribute[2] = -1;
          attribute[1] = -1;
          attribute[3] = 0;
          *attribute = (int)TiXmlAttribute::vftable;
          attribute[5] = (int)&DAT_01bf2c00;
          attribute[6] = (int)&DAT_01bf2c00;
          attribute[8] = 0;
          attribute[7] = 0;
          pcVar1 = *(code **)(*attribute + 8);
          attribute[4] = (int)this;
          errorLocation = (char *)(*pcVar1)(pcVar4,param_3,param_4);
          if ((errorLocation == (char *)0x0) || (*errorLocation == '\0')) {
            if (this != (void *)0x0) {
              TiXmlDocument_SetError(this,4,pcVar4,(int)param_3,(char *)param_4);
            }
            (**(code **)*attribute)(1);
            goto LAB_00d54d6c;
          }
          iVar6 = TiXmlAttributeSet_Find(attribute[5] + 8);
          if (iVar6 != 0) {
            FUN_00d50780(attribute[6] + 8);
            (**(code **)*attribute)(1);
            goto LAB_00d54d6c;
          }
          TiXmlAttributeSet_Add((void *)(param_1 + 0x2c),attribute);
        }
        if (this == (void *)0x0) goto LAB_00d54d6c;
        iVar6 = 7;
LAB_00d54d67:
        TiXmlDocument_SetError(this,iVar6,errorLocation,(int)param_3,(char *)param_4);
LAB_00d54d6c:
        local_4 = 0xffffffff;
        if (param_4 == &DAT_01bf2c00) {
          ExceptionList = local_c;
          return (char *)0x0;
        }
                    /* WARNING: Subroutine does not return */
        _free(param_4);
      }
      if (this == (void *)0x0) {
        ExceptionList = local_c;
        return (char *)0x0;
      }
      iVar6 = 5;
      goto LAB_00d54ee5;
    }
    param_3 = puVar5;
    if (this == (void *)0x0) {
      ExceptionList = local_c;
      return (char *)0x0;
    }
  }
  iVar6 = 4;
LAB_00d54ee5:
  TiXmlDocument_SetError(this,iVar6,pcVar4,(int)param_3,(char *)param_4);
  ExceptionList = local_c;
  return (char *)0x0;
}

