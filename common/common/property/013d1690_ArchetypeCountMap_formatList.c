// addr: 0x013d1690
// name: ArchetypeCountMap_formatList
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int ArchetypeCountMap_formatList(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  void *this;
  uint uVar7;
  int *piVar8;
  undefined4 ****ppppuVar9;
  char *pcVar10;
  int local_434;
  undefined4 *local_430;
  int local_42c;
  undefined4 local_428;
  undefined4 *local_424;
  int local_41c;
  undefined1 local_418 [4];
  undefined4 ***apppuStack_414 [4];
  undefined4 uStack_404;
  uint uStack_400;
  char acStack_3fc [1004];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* Formats a map of archetype id to count into a newline-separated string of
                       entries like '%d x %s', resolving each archetype name through ArchetypeDB.
                       Evidence is the '%d x %s' literal and ArchetypeDB_getArchetype/getField3c
                       calls. */
  puStack_8 = &LAB_0168afbd;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&local_434;
  uVar6 = DAT_01b839d8 ^ (uint)&stack0xfffffbbc;
  ExceptionList = &local_c;
  local_4 = 0;
  local_41c = param_1;
  local_42c = param_2;
  local_428 = 0;
  ArchetypeDB_getInstance();
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  local_4 = 0;
  local_424 = *(undefined4 **)(param_2 + 4);
  local_430 = (undefined4 *)*local_424;
  local_428 = 1;
  local_434 = param_2;
  while( true ) {
    puVar5 = local_430;
    iVar4 = local_434;
    if ((local_434 == 0) || (local_434 != param_2)) {
      FUN_00d83c2d(uVar6);
    }
    if (puVar5 == local_424) break;
    if (iVar4 == 0) {
      FUN_00d83c2d(uVar6);
    }
    if (puVar5 == *(undefined4 **)(iVar4 + 4)) {
      FUN_00d83c2d(uVar6);
    }
    uVar2 = puVar5[3];
    if (puVar5 == *(undefined4 **)(iVar4 + 4)) {
      FUN_00d83c2d();
    }
    uVar3 = puVar5[4];
    ArchetypeDB_getInstance();
    uVar7 = Archetype_getField3c(this);
    piVar8 = (int *)ArchetypeDB_getArchetype(uVar2,uVar7);
    if (piVar8 != (int *)0x0) {
      (**(code **)(*piVar8 + 0xcc))(local_418,1,0);
      local_4 = 1;
      ppppuVar9 = (undefined4 ****)apppuStack_414[0];
      if (uStack_400 < 0x10) {
        ppppuVar9 = apppuStack_414;
      }
      __snprintf(acStack_3fc,1000,"%d x %s",uVar3,ppppuVar9);
      if (*(int *)(param_1 + 0x14) != 0) {
        FUN_01270140(1,10);
      }
      pcVar10 = acStack_3fc;
      do {
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
      FUN_01241650(acStack_3fc,(int)pcVar10 - (int)(acStack_3fc + 1));
      local_4 = local_4 & 0xffffff00;
      if (0xf < uStack_400) {
                    /* WARNING: Subroutine does not return */
        _free(apppuStack_414[0]);
      }
      uStack_400 = 0xf;
      uStack_404 = 0;
      apppuStack_414[0] = (undefined4 ***)((uint)apppuStack_414[0] & 0xffffff00);
    }
    FUN_004d21f9();
    param_2 = local_42c;
  }
  ExceptionList = local_c;
  return param_1;
}

