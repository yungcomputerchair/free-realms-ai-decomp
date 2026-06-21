// addr: 0x012d94e0
// name: PropertyMap_buildValidationReport
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall PropertyMap_buildValidationReport(void *param_1,int param_2)

{
  uint *puVar1;
  char cVar2;
  void *key;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 uVar8;
  uint *puVar9;
  uint *local_454;
  void *local_450;
  undefined1 local_44c [4];
  uint *local_448;
  uint *local_444;
  undefined4 uStack_440;
  undefined1 local_43c [4];
  uint *local_438;
  uint *local_434;
  undefined4 uStack_430;
  int local_42c;
  undefined4 *local_428;
  undefined4 local_424;
  undefined4 *local_41c;
  int local_418;
  undefined1 local_414 [4];
  void *pvStack_410;
  undefined4 uStack_400;
  uint uStack_3fc;
  char local_3f8 [1000];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Builds a text report for validation/remapping entries whose status is not
                       complete, listing per-entry errors and invalid archetypes. Evidence includes
                       strings '* Errors:', '* Invalid archetypes:', and '%d -> %d:'. */
  puStack_8 = &LAB_01670ce3;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&local_454;
  uVar6 = DAT_01b839d8 ^ (uint)&stack0xfffffb9c;
  ExceptionList = &local_c;
  *(undefined4 *)(param_2 + 0x18) = 0xf;
  *(undefined4 *)(param_2 + 0x14) = 0;
  local_418 = param_2;
  *(undefined1 *)(param_2 + 4) = 0;
  local_4 = 0;
  local_41c = *(undefined4 **)((int)param_1 + 0x34);
  local_42c = (int)param_1 + 0x30;
  local_428 = (undefined4 *)*local_41c;
  local_424 = 1;
  local_450 = param_1;
  do {
    puVar5 = local_428;
    iVar4 = local_42c;
    if ((local_42c == 0) || (local_42c != (int)local_450 + 0x30)) {
      FUN_00d83c2d(uVar6);
    }
    if (puVar5 == local_41c) {
      ExceptionList = local_c;
      return param_2;
    }
    if (iVar4 == 0) {
      FUN_00d83c2d(uVar6);
    }
    if (puVar5 == *(undefined4 **)(iVar4 + 4)) {
      FUN_00d83c2d(uVar6);
    }
    key = (void *)puVar5[3];
    if (puVar5 == *(undefined4 **)(iVar4 + 4)) {
      FUN_00d83c2d(uVar6);
    }
    if (puVar5[4] != 3) {
      __snprintf(local_3f8,1000,"%d -> %d:\n",key,puVar5[4]);
      pcVar7 = local_3f8;
      do {
        cVar2 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar2 != '\0');
      FUN_01241650(local_3f8,(int)pcVar7 - (int)(local_3f8 + 1));
      StringRangeTree_findOrEmpty(local_450,local_44c,key);
      local_4 = 1;
      if ((local_448 != (uint *)0x0) &&
         (iVar4 = (int)local_444 - (int)local_448 >> 0x1f,
         ((int)local_444 - (int)local_448) / 0x1c + iVar4 != iVar4)) {
        FUN_01241650(" * Errors:\n",0xb);
        local_454 = local_444;
        if (local_444 < local_448) {
          FUN_00d83c2d();
        }
        puVar9 = local_448;
        if (local_444 < local_448) {
          FUN_00d83c2d();
        }
        while( true ) {
          if (&stack0x00000000 == (undefined1 *)0x44c) {
            FUN_00d83c2d();
          }
          if (puVar9 == local_454) break;
          if (&stack0x00000000 == (undefined1 *)0x44c) {
            FUN_00d83c2d();
          }
          if (local_444 <= puVar9) {
            FUN_00d83c2d();
          }
          FUN_01241650("   * ",5);
          StdString_appendSubstring(puVar9,0,0xffffffff);
          FUN_01241650(&DAT_01770548,1);
          if (local_444 <= puVar9) {
            FUN_00d83c2d();
          }
          puVar9 = puVar9 + 7;
        }
      }
      PropertyMap_copyStringValueOrDefault(local_450,local_43c,key);
      local_4._0_1_ = 2;
      if ((local_438 != (uint *)0x0) && ((int)local_434 - (int)local_438 >> 2 != 0)) {
        FUN_01241650(" * Invalid archetypes:\n",0x17);
        local_454 = local_434;
        if (local_434 < local_438) {
          FUN_00d83c2d();
        }
        puVar9 = local_438;
        if (local_434 < local_438) {
          FUN_00d83c2d();
        }
        while( true ) {
          if (&stack0x00000000 == (undefined1 *)0x43c) {
            FUN_00d83c2d();
          }
          if (puVar9 == local_454) break;
          if (&stack0x00000000 == (undefined1 *)0x43c) {
            FUN_00d83c2d();
          }
          if (local_434 <= puVar9) {
            FUN_00d83c2d();
          }
          piVar3 = (int *)*puVar9;
          FUN_01241650("   * ",5);
          uVar8 = (**(code **)(*piVar3 + 0xcc))(local_414,1,0);
          local_4._0_1_ = 3;
          StdString_appendSubstring(uVar8,0,0xffffffff);
          local_4._0_1_ = 2;
          if (0xf < uStack_3fc) {
                    /* WARNING: Subroutine does not return */
            _free(pvStack_410);
          }
          uStack_3fc = 0xf;
          uStack_400 = 0;
          pvStack_410 = (void *)((uint)pvStack_410 & 0xffffff00);
          FUN_01241650(&DAT_01770548,1);
          if (local_434 <= puVar9) {
            FUN_00d83c2d();
          }
          puVar9 = puVar9 + 1;
        }
      }
      local_4 = CONCAT31(local_4._1_3_,1);
      if (local_438 != (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(local_438);
      }
      local_438 = (uint *)0x0;
      local_434 = (uint *)0x0;
      uStack_430 = 0;
      local_4 = (uint)local_4._1_3_ << 8;
      if (local_448 != (uint *)0x0) {
        if (local_448 != local_444) {
          puVar9 = local_448 + 6;
          do {
            if (0xf < *puVar9) {
                    /* WARNING: Subroutine does not return */
              _free((void *)puVar9[-5]);
            }
            *puVar9 = 0xf;
            puVar9[-1] = 0;
            *(undefined1 *)(puVar9 + -5) = 0;
            puVar1 = puVar9 + 1;
            puVar9 = puVar9 + 7;
          } while (puVar1 != local_444);
        }
                    /* WARNING: Subroutine does not return */
        _free(local_448);
      }
      local_448 = (uint *)0x0;
      local_444 = (uint *)0x0;
      uStack_440 = 0;
    }
    FUN_012d60b0();
  } while( true );
}

