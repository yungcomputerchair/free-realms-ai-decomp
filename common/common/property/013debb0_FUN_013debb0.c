// addr: 0x013debb0
// name: FUN_013debb0
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


basic_string<char,std::char_traits<char>,std::allocator<char>_> *
FUN_013debb0(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  void *pvVar5;
  char *pcVar6;
  void *pvVar7;
  char *pcVar8;
  undefined1 *puVar9;
  undefined1 local_24 [4];
  void *local_20;
  void *local_1c;
  undefined4 local_18;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* Builds a deck/list vector, sorts it, and copies the first non-empty string
                       field into the output string. */
  puStack_8 = &LAB_0168ccb9;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffcc;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  local_14 = param_1;
  param_1[4] = (basic_string<char,std::char_traits<char>,std::allocator<char>_>)0x0;
  local_4 = 0;
  puVar9 = local_24;
  local_10 = 1;
  FUN_012aab80(puVar9,uVar2);
  iVar3 = FUN_012aa280(puVar9);
  if (*(int *)(iVar3 + 4) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (*(int *)(iVar3 + 8) - *(int *)(iVar3 + 4)) / 0x1c;
  }
  local_4 = 0;
  if (local_20 != (void *)0x0) {
    StdStringRange_destroy(local_20,local_1c);
                    /* WARNING: Subroutine does not return */
    _free(local_20);
  }
  local_20 = (void *)0x0;
  local_1c = (void *)0x0;
  local_18 = 0;
  if (iVar3 != 0) {
    puVar9 = local_24;
    FUN_012aab80(puVar9,uVar2);
    FUN_012aa280(puVar9);
    pvVar5 = local_1c;
    local_4 = 2;
    pvVar7 = local_20;
    if ((local_1c < local_20) && (FUN_00d83c2d(), pvVar7 = local_20, local_1c < local_20)) {
      FUN_00d83c2d();
    }
    FUN_013dea30(pvVar7,pvVar5,((int)pvVar5 - (int)pvVar7) / 0x1c);
    pvVar7 = local_20;
    pvVar5 = local_1c;
    if (local_1c < local_20) {
      FUN_00d83c2d();
      pvVar5 = local_1c;
    }
    while( true ) {
      pvVar4 = pvVar5;
      if (pvVar5 < local_20) {
        FUN_00d83c2d();
        pvVar4 = local_1c;
      }
      if (pvVar7 == pvVar5) goto LAB_013ded5a;
      if (pvVar4 <= pvVar7) {
        FUN_00d83c2d();
        pvVar4 = local_1c;
      }
      if (*(int *)((int)pvVar7 + 0x14) != 0) break;
      pvVar5 = pvVar4;
      if (pvVar4 <= pvVar7) {
        FUN_00d83c2d();
        pvVar5 = local_1c;
      }
      pvVar7 = (void *)((int)pvVar7 + 0x1c);
    }
    if (pvVar4 <= pvVar7) {
      FUN_00d83c2d();
    }
    if (*(uint *)((int)pvVar7 + 0x18) < 0x10) {
      pcVar8 = (char *)((int)pvVar7 + 4);
    }
    else {
      pcVar8 = *(char **)((int)pvVar7 + 4);
    }
    pcVar6 = pcVar8;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (param_1,pcVar8,(int)pcVar6 - (int)(pcVar8 + 1));
LAB_013ded5a:
    local_4 = local_4 & 0xffffff00;
    if (local_20 != (void *)0x0) {
      StdStringRange_destroy(local_20,local_1c);
                    /* WARNING: Subroutine does not return */
      _free(local_20);
    }
  }
  ExceptionList = local_c;
  return param_1;
}

