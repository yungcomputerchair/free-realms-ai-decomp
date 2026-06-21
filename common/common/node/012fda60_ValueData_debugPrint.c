// addr: 0x012fda60
// name: ValueData_debugPrint
// subsystem: common/common/node
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void ValueData_debugPrint(void * this, void * outputString) */

void __thiscall ValueData_debugPrint(void *this,void *outputString)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  void *pvVar5;
  int iVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 uVar9;
  int local_478;
  undefined4 *local_474;
  int local_470;
  undefined4 *local_46c;
  undefined4 *local_464;
  undefined1 local_460 [4];
  void *local_45c;
  undefined4 local_44c;
  uint local_448;
  int local_444 [2];
  undefined1 local_43c [8];
  undefined1 local_434 [8];
  undefined1 local_42c [8];
  undefined1 local_424 [8];
  int local_41c [2];
  undefined1 local_414 [28];
  char local_3f8 [1000];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Formats a ValueData instance into a debug string, handling booleans,
                       integers, strings, string/integer/value lists, messages, InstanceID, and int
                       maps. Recursive list/map cases call back into this formatter for nested
                       ValueData. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016758f6;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&local_478;
  ExceptionList = &local_c;
  switch(*(undefined4 *)((int)this + 4)) {
  case 0:
    FUN_01241fc0("(value unhandled type: invalid)");
    break;
  case 1:
    if (*(char *)((int)this + 8) == '\0') {
      FUN_01241fc0("(value boolean false)");
    }
    else {
      FUN_01241fc0("(value boolean true)");
    }
    break;
  case 2:
    FUN_01241fc0("(value integer ");
    __snprintf(local_3f8,1000,"%d",*(undefined4 *)((int)this + 8));
    goto LAB_012fdb18;
  case 3:
    FUN_01241fc0("(value string \"");
    StdString_appendSubstring(*(undefined4 *)((int)this + 8),0,0xffffffff);
    FUN_01241fc0(&DAT_018d6cf0);
    break;
  default:
    uVar9 = 0x24;
    pcVar8 = "(value unhandled type: unknown type)";
    goto LAB_012fdfd3;
  case 5:
    FUN_01241fc0("(value unhandled type: expression tree)");
    break;
  case 6:
    FUN_01241fc0("(value integer list:");
    piVar4 = (int *)FUN_0041f5d2(local_434);
    local_474 = (undefined4 *)piVar4[1];
    iVar2 = *piVar4;
    piVar4 = (int *)FUN_0041f3a1(local_42c);
    iVar6 = *piVar4;
    puVar7 = (undefined4 *)piVar4[1];
    while( true ) {
      if ((iVar6 == 0) || (iVar6 != iVar2)) {
        FUN_00d83c2d();
      }
      if (puVar7 == local_474) break;
      if (iVar6 == 0) {
        FUN_00d83c2d();
      }
      if (*(undefined4 **)(iVar6 + 8) <= puVar7) {
        FUN_00d83c2d();
      }
      __snprintf(local_3f8,1000,"%d ",*puVar7);
      pcVar8 = local_3f8;
      do {
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      FUN_01241650(local_3f8,(int)pcVar8 - (int)(local_3f8 + 1));
      if (*(undefined4 **)(iVar6 + 8) <= puVar7) {
        FUN_00d83c2d();
      }
      puVar7 = puVar7 + 1;
    }
    goto LAB_012fdc2a;
  case 7:
    FUN_01241fc0("(value string list:");
    piVar4 = StdStringVector_makeEndIterator(*(void **)((int)this + 8),local_444);
    local_474 = (undefined4 *)piVar4[1];
    iVar2 = *piVar4;
    piVar4 = StdStringVector_makeBeginIterator(*(void **)((int)this + 8),local_41c);
    iVar6 = *piVar4;
    puVar7 = (undefined4 *)piVar4[1];
    while( true ) {
      if ((iVar6 == 0) || (iVar6 != iVar2)) {
        FUN_00d83c2d();
      }
      if (puVar7 == local_474) break;
      if (iVar6 == 0) {
        FUN_00d83c2d();
      }
      if (*(undefined4 **)(iVar6 + 8) <= puVar7) {
        FUN_00d83c2d();
      }
      if ((uint)puVar7[6] < 0x10) {
        puVar3 = puVar7 + 1;
      }
      else {
        puVar3 = (undefined4 *)puVar7[1];
      }
      __snprintf(local_3f8,1000,"%s ",puVar3);
      pcVar8 = local_3f8;
      do {
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      FUN_01241650(local_3f8,(int)pcVar8 - (int)(local_3f8 + 1));
      if (*(undefined4 **)(iVar6 + 8) <= puVar7) {
        FUN_00d83c2d();
      }
      puVar7 = puVar7 + 7;
    }
    goto LAB_012fdc2a;
  case 8:
    FUN_01241fc0("(value valuedata list:");
    piVar4 = (int *)FUN_012fbdd0(local_424);
    local_474 = (undefined4 *)piVar4[1];
    iVar2 = *piVar4;
    piVar4 = (int *)FUN_012fbda0(local_43c);
    iVar6 = *piVar4;
    puVar7 = (undefined4 *)piVar4[1];
    while( true ) {
      if ((iVar6 == 0) || (iVar6 != iVar2)) {
        FUN_00d83c2d();
      }
      if (puVar7 == local_474) break;
      if (iVar6 == 0) {
        FUN_00d83c2d();
      }
      if (*(undefined4 **)(iVar6 + 8) <= puVar7) {
        FUN_00d83c2d();
      }
      ValueData_debugPrint((void *)*puVar7,outputString);
      if (*(undefined4 **)(iVar6 + 8) <= puVar7) {
        FUN_00d83c2d();
      }
      puVar7 = puVar7 + 1;
    }
    goto LAB_012fdc2a;
  case 10:
    FUN_01241fc0("(value Message: ");
    uVar9 = MessageText_formatWithValueData(local_414);
    local_4 = 0;
    StdString_appendSubstring(uVar9,0,0xffffffff);
    local_4 = 0xffffffff;
    FUN_0041f1d7();
    FUN_01241fc0(&DAT_0177057c);
    break;
  case 0xb:
    FUN_01241fc0("(value InsanceID: ");
    iVar2 = *(int *)((int)this + 8);
    __snprintf(local_3f8,1000,"archID=%d, seriesID=%d, instanceNum=%d",*(undefined4 *)(iVar2 + 4),
               *(undefined4 *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0xc));
LAB_012fdb18:
    FUN_01241fc0(local_3f8);
    FUN_01241fc0(&DAT_0177057c);
    break;
  case 0xd:
    FUN_01241fc0("(IntIntMap Type:");
    iVar2 = *(int *)((int)this + 8);
    local_474 = *(undefined4 **)(iVar2 + 4);
    local_46c = (undefined4 *)*local_474;
    local_470 = iVar2;
    while( true ) {
      puVar7 = local_46c;
      iVar6 = local_470;
      if ((local_470 == 0) || (local_470 != iVar2)) {
        FUN_00d83c2d();
      }
      if (puVar7 == local_474) break;
      if (iVar6 == 0) {
        FUN_00d83c2d();
      }
      if ((puVar7 == *(undefined4 **)(iVar6 + 4)) &&
         (FUN_00d83c2d(), puVar7 == *(undefined4 **)(iVar6 + 4))) {
        FUN_00d83c2d();
      }
      __snprintf(local_3f8,1000,"(%d, %d) ",puVar7[3],puVar7[4]);
      pcVar8 = local_3f8;
      do {
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      FUN_01241650(local_3f8,(int)pcVar8 - (int)(local_3f8 + 1));
      FUN_004d21f9();
    }
    goto LAB_012fdc2a;
  case 0xe:
    FUN_01241fc0("(IntValueMap Values:");
    local_478 = *(int *)((int)this + 8);
    local_464 = *(undefined4 **)(local_478 + 4);
    local_474 = (undefined4 *)*local_464;
    local_470 = local_478;
    while( true ) {
      puVar7 = local_474;
      iVar2 = local_478;
      if ((local_478 == 0) || (local_478 != local_470)) {
        FUN_00d83c2d();
      }
      if (puVar7 == local_464) break;
      if (iVar2 == 0) {
        FUN_00d83c2d();
      }
      if (puVar7 == *(undefined4 **)(iVar2 + 4)) {
        FUN_00d83c2d();
      }
      pvVar5 = ValueData_toString((void *)puVar7[4],local_460);
      local_4 = 1;
      if (*(uint *)((int)pvVar5 + 0x18) < 0x10) {
        iVar6 = (int)pvVar5 + 4;
      }
      else {
        iVar6 = *(int *)((int)pvVar5 + 4);
      }
      if (puVar7 == *(undefined4 **)(iVar2 + 4)) {
        FUN_00d83c2d();
      }
      __snprintf(local_3f8,1000,"(%d, %s) ",puVar7[3],iVar6);
      local_4 = 0xffffffff;
      if (0xf < local_448) {
                    /* WARNING: Subroutine does not return */
        _free(local_45c);
      }
      pcVar8 = local_3f8;
      local_448 = 0xf;
      local_44c = 0;
      local_45c = (void *)((uint)local_45c & 0xffffff00);
      do {
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      FUN_01241650(local_3f8,(int)pcVar8 - (int)(local_3f8 + 1));
      FUN_012af3e0();
    }
LAB_012fdc2a:
    uVar9 = 1;
    pcVar8 = ")";
LAB_012fdfd3:
    FUN_01241650(pcVar8,uVar9);
  }
  ExceptionList = local_c;
  return;
}

