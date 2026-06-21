// addr: 0x004b4344
// name: FUN_004b4344
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall
FUN_004b4344(int param_1,uint param_2,undefined4 *param_3,int param_4,int param_5,
            undefined4 *param_6,undefined4 param_7)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  void *pvVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined1 local_2c [8];
  undefined1 local_24 [24];
  undefined4 local_c;
  undefined4 *local_8;
  
                    /* Complex UI/text layout or glyph run helper that computes a range, manages
                       cached run state, allocates an object, and records fallback state. No
                       reliable rename evidence. */
  puVar2 = (undefined4 *)FUN_004afa4c(param_2,param_3,param_5,param_6,param_7);
  if ((int)puVar2 < 0) {
    puVar2 = (undefined4 *)0xffffffff;
  }
  else if (*(int *)(param_1 + 0x78) == 0) {
    iVar3 = FUN_004829ee();
    if (iVar3 != 0) {
      iVar3 = FUN_0045c1b7();
      uVar4 = iVar3 - (int)puVar2;
      if (param_6 <= (uint)(iVar3 - (int)puVar2)) {
        uVar4 = (uint)param_6;
      }
      param_6 = (undefined4 *)uVar4;
      if ((puVar2 == (undefined4 *)0x0) && (uVar4 = FUN_0045c1b7(), (undefined4 *)uVar4 == param_6))
      {
        puVar2 = (undefined4 *)FUN_00482a01(0);
        uVar7 = *puVar2;
        puVar2 = (undefined4 *)FUN_00482a01(0);
        uVar11 = *puVar2;
        uVar5 = FUN_004829ee(uVar11);
        cVar1 = FUN_00486c7e(param_4,1,uVar5,uVar11);
        if (cVar1 == '\0') {
          pvVar6 = Mem_Alloc(0x10);
          if (pvVar6 == (void *)0x0) {
            uVar7 = 0;
          }
          else {
            uVar7 = FUN_004aff52(param_4);
          }
          *(undefined4 *)(param_1 + 0x78) = uVar7;
        }
        else {
          *(undefined4 *)(param_1 + 0x74) = uVar7;
        }
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar8 = (undefined4 *)FUN_00482a01(0);
        uVar7 = *puVar8;
        puVar8 = (undefined4 *)FUN_00482a01(0);
        uVar11 = *puVar8;
        uVar5 = FUN_004829ee(uVar11);
        cVar1 = FUN_00486c7e(param_4,1,uVar5,uVar11);
        if (cVar1 == '\0') {
          param_6 = Mem_Alloc(0x10);
          if (param_6 == (void *)0x0) {
            param_6 = (void *)0x0;
          }
          else {
            iVar3 = param_1 + 0x74;
            uVar7 = FUN_0045c1b7(iVar3);
            FUN_004b0767(uVar7,iVar3);
          }
          *(undefined4 **)(param_1 + 0x78) = param_6;
          iVar3 = FUN_004829ee();
          param_3 = (undefined4 *)FUN_004829ee();
          if ((undefined4 *)(iVar3 + (int)puVar2) <= param_3) {
            param_3 = (undefined4 *)(iVar3 + (int)puVar2);
          }
          if (puVar2 < param_3) {
            param_5 = 0;
            param_6 = puVar2;
            do {
              puVar8 = (undefined4 *)FUN_00482a01(param_5);
              puVar9 = (undefined4 *)FUN_00482a22(param_6);
              param_6 = (undefined4 *)((int)param_6 + 1);
              param_5 = param_5 + 1;
              *puVar9 = *puVar8;
            } while (param_6 < param_3);
          }
        }
        else {
          *(undefined4 *)(param_1 + 0x74) = uVar7;
        }
      }
    }
  }
  else {
    uVar4 = FUN_0045c1b7();
    if (uVar4 <= (uint)(param_5 + (int)param_6)) {
      iVar3 = FUN_0045c1b7();
      param_6 = (undefined4 *)(iVar3 - param_5);
    }
    local_8 = (undefined4 *)FUN_004829ee();
    param_2 = (int)local_8 - (int)puVar2;
    if (param_6 <= param_2) {
      param_2 = (uint)param_6;
    }
    puVar8 = (undefined4 *)(param_2 + (int)puVar2);
    puVar9 = (undefined4 *)FUN_00482a22(0);
    uVar7 = *puVar9;
    if ((((int)puVar2 < 2) ||
        (cVar1 = FUN_00486c7e(*(undefined4 *)(param_1 + 0x78),1,(int)puVar2 + -1,uVar7),
        cVar1 != '\0')) &&
       ((local_8 <= puVar8 ||
        (cVar1 = FUN_00486c7e(*(undefined4 *)(param_1 + 0x78),puVar8,(int)local_8 - (int)puVar8,
                              uVar7), cVar1 != '\0')))) {
      uVar11 = uVar7;
      uVar5 = FUN_004829ee(uVar7);
      cVar1 = FUN_00486c7e(param_4,0,uVar5,uVar11);
      if (cVar1 != '\0') {
        pvVar6 = *(void **)(param_1 + 0x78);
        *(undefined4 *)(param_1 + 0x74) = uVar7;
        if (pvVar6 == (void *)0x0) {
          *(undefined4 *)(param_1 + 0x78) = 0;
          return puVar2;
        }
        FUN_004a0788();
                    /* WARNING: Subroutine does not return */
        _free(pvVar6);
      }
    }
    if (puVar2 < puVar8) {
      puVar9 = puVar2;
      do {
        local_8 = (undefined4 *)FUN_00482a01((param_5 - (int)puVar2) + (int)puVar9);
        puVar10 = (undefined4 *)FUN_00482a22(puVar9);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
        *puVar10 = *local_8;
      } while (puVar9 < puVar8);
    }
    if (param_2 < param_6) {
      FUN_0049235a(*(undefined4 *)(param_4 + 4),param_4);
      FUN_0049235a(*(undefined4 *)(param_4 + 4),param_4);
      FUN_0049235a(*(undefined4 *)(*(int *)(param_1 + 0x78) + 8),*(int *)(param_1 + 0x78));
      puVar8 = (undefined4 *)FUN_00491f7e(local_24,(int)param_6 + param_5);
      puVar9 = (undefined4 *)FUN_00491f7e(local_2c,param_2 + param_5);
      FUN_004af9c4(local_c,local_8,*puVar9,puVar9[1],*puVar8,puVar8[1]);
    }
  }
  return puVar2;
}

