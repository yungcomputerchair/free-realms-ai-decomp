// addr: 0x0085d860
// name: GuiPropertyDataSource_PropertySetFilter_rebuildSharedProperties
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuiPropertyDataSource_PropertySetFilter_rebuildSharedProperties(void *
   this) */

void __fastcall GuiPropertyDataSource_PropertySetFilter_rebuildSharedProperties(void *this)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  bool bVar4;
  void **ppvVar5;
  undefined4 *puVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  undefined1 auStack_38 [4];
  undefined4 *puStack_34;
  undefined4 *puStack_30;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [8];
  undefined4 uStack_20;
  undefined **ppuStack_1c;
  undefined4 *puStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Rebuilds the PropertySetFilter shared-property set by clearing old shared
                       properties, iterating filters, collecting properties common to selected
                       property sets, and freeing no-longer-shared entries. Class/domain inferred
                       from SharedProperty list vtable and neighboring helpers. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_015731c8;
  uVar8 = DAT_01b839d8 ^ (uint)&stack0xffffffb4;
  iVar1 = *(int *)((int)this + 0x2c);
  ppvVar5 = &local_c;
  local_c = ExceptionList;
  while (ExceptionList = ppvVar5, iVar1 != 0) {
    FUN_0085c530(iVar1,uVar8);
    ppvVar5 = ExceptionList;
    iVar1 = *(int *)((int)this + 0x2c);
  }
  puVar2 = *(undefined4 **)((int)this + 0x1c);
  puVar3 = (undefined4 *)0x0;
  while (puVar6 = puVar2, puVar6 != (undefined4 *)0x0) {
    puVar3 = puVar6;
    puVar2 = (undefined4 *)puVar6[2];
  }
  iVar1 = *(int *)((int)this + 0x20);
  bVar4 = true;
  while (puVar3 != (undefined4 *)0x0) {
    if (bVar4) {
      iVar9 = (*(code *)**(undefined4 **)*puVar3)(auStack_2c,&puStack_34,auStack_38);
      while (iVar9 != 0) {
        if ((iVar1 < 2) || ((puStack_34 != (undefined4 *)0x0 && (puStack_34 != (undefined4 *)0x1))))
        {
          uStack_20 = 0;
          puStack_30 = puStack_34;
          FUN_0085d7b0(&puStack_30,auStack_28);
        }
        iVar9 = (**(code **)(*(int *)*puVar3 + 4))(auStack_2c,&puStack_34,auStack_38);
      }
      bVar4 = false;
    }
    else {
      ppuStack_1c = SoeUtil::List<GuiPropertyDataSource::PropertySetFilter::SharedProperty*,-1>::
                    vftable;
      uStack_10 = 0;
      puStack_18 = (undefined4 *)0x0;
      uStack_14 = 0;
      uStack_4 = 0;
      for (puVar2 = *(undefined4 **)((int)this + 0x2c); puVar2 != (undefined4 *)0x0;
          puVar2 = (undefined4 *)puVar2[3]) {
        puStack_30 = puVar2;
        cVar7 = (**(code **)(*(int *)*puVar3 + 0x28))(*puVar2);
        if (cVar7 == '\0') {
          FUN_0085c610(&puStack_30);
        }
      }
      puStack_30 = (undefined4 *)0x0;
      for (puVar2 = puStack_18; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)puVar2[1]) {
        FUN_0085c530(*puVar2,uVar8);
      }
      uStack_4 = 0xffffffff;
      ppuStack_1c = SoeUtil::List<GuiPropertyDataSource::PropertySetFilter::SharedProperty*,-1>::
                    vftable;
      FUN_0085ce40();
    }
    puVar2 = (undefined4 *)puVar3[3];
    if (puVar2 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)puVar3[1];
      puVar2 = puVar3;
      while ((puVar3 = puVar6, puVar3 != (undefined4 *)0x0 && ((undefined4 *)puVar3[3] == puVar2)))
      {
        puVar2 = puVar3;
        puVar6 = (undefined4 *)puVar3[1];
      }
    }
    else {
      puVar3 = puVar2;
      for (puVar2 = (undefined4 *)puVar2[2]; puVar2 != (undefined4 *)0x0;
          puVar2 = (undefined4 *)puVar2[2]) {
        puVar3 = puVar2;
      }
    }
  }
  ExceptionList = local_c;
  return;
}

