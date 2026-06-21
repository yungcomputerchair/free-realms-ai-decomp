// addr: 0x012ea4f0
// name: FUN_012ea4f0
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Removing unreachable block (ram,0x012ea704) */

void __thiscall FUN_012ea4f0(int param_1,int *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  uint uVar7;
  char *pcVar8;
  undefined4 *puVar9;
  uint uStack_70;
  void *pvStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int iStack_60;
  int iStack_5c;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_54 [4];
  void *pvStack_50;
  undefined4 uStack_40;
  uint uStack_3c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Looks up an object by its virtual name string and inserts/registers it in an
                       internal string-keyed container when absent; details of the owning class are
                       not evident. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_01672ee8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_2 != (int *)0x0) {
    pcVar5 = (char *)(**(code **)(*param_2 + 4))();
    uStack_3c = 0xf;
    uStack_40 = 0;
    pvStack_50 = (void *)((uint)pvStack_50 & 0xffffff00);
    pcVar8 = pcVar5;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (abStack_54,pcVar5,(int)pcVar8 - (int)(pcVar5 + 1));
    uStack_4 = 0;
    FUN_012e7e00();
    iVar4 = iStack_60;
    uStack_4 = 0xffffffff;
    if (0xf < uStack_3c) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_50);
    }
    pvStack_6c = *(void **)(param_1 + 0x6c);
    uStack_3c = 0xf;
    uStack_40 = 0;
    pvStack_50 = (void *)((uint)pvStack_50 & 0xffffff00);
    if ((iStack_60 == 0) || (iStack_60 != param_1 + 0x68)) {
      FUN_00d83c2d();
    }
    if ((void *)iStack_5c == pvStack_6c) {
      pvStack_6c = (void *)0x0;
      uStack_68 = 0;
      uStack_64 = 0;
      uStack_4 = 1;
      FUN_012e9010();
      FUN_012e8b00(&uStack_70);
      uStack_4._0_1_ = 2;
      uVar6 = (**(code **)(*param_2 + 4))();
      uStack_4._0_1_ = 1;
      FUN_012e98d0(abStack_54,uVar6);
      uStack_4._0_1_ = 3;
      FUN_012e8e50();
      uStack_4._0_1_ = 4;
      FUN_012ea140();
      uStack_4._0_1_ = 3;
      FUN_012e7d70();
      uStack_4 = CONCAT31(uStack_4._1_3_,1);
      FUN_012e7d00();
      uStack_4 = 0xffffffff;
      if (pvStack_6c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_6c);
      }
    }
    else {
      if (iVar4 == 0) {
        FUN_00d83c2d();
      }
      if (iStack_5c == *(int *)(iVar4 + 4)) {
        FUN_00d83c2d();
      }
      iVar4 = iStack_5c;
      puVar9 = *(undefined4 **)(iStack_5c + 0x2c);
      if (*(undefined4 **)(iStack_5c + 0x30) < puVar9) {
        FUN_00d83c2d();
      }
      while( true ) {
        if (iStack_5c == *(int *)(iStack_60 + 4)) {
          FUN_00d83c2d();
        }
        puVar2 = *(undefined4 **)(iVar4 + 0x30);
        if (puVar2 < *(undefined4 **)(iVar4 + 0x2c)) {
          FUN_00d83c2d();
        }
        if (puVar9 == puVar2) {
          if (iStack_5c == *(int *)(iStack_60 + 4)) {
            FUN_00d83c2d();
          }
          FUN_012e9010();
          ExceptionList = local_c;
          return;
        }
        if (*(undefined4 **)(iVar4 + 0x30) <= puVar9) {
          FUN_00d83c2d();
        }
        piVar3 = (int *)*puVar9;
        uStack_70 = (**(code **)(*param_2 + 0xc))();
        uVar7 = (**(code **)(*piVar3 + 0xc))();
        if (uVar7 < uStack_70) break;
        if (*(undefined4 **)(iVar4 + 0x30) <= puVar9) {
          FUN_00d83c2d();
        }
        puVar9 = puVar9 + 1;
      }
      if (iStack_5c == *(int *)(iStack_60 + 4)) {
        FUN_00d83c2d();
      }
      FUN_012e8be0();
    }
  }
  ExceptionList = local_c;
  return;
}

