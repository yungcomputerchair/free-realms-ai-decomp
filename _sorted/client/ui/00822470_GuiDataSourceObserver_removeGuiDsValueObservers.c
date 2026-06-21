// addr: 0x00822470
// name: GuiDataSourceObserver_removeGuiDsValueObservers
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int GuiDataSourceObserver_removeGuiDsValueObservers(void * this) */

int __fastcall GuiDataSourceObserver_removeGuiDsValueObservers(void *this)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
                    /* Walks a tree/list of GuiDataSourceObserver entries, finds entries that are
                       GuiDsValue instances, calls their vfunc +0x14 with this object, and restarts
                       traversal after each removal. Returns the number removed/notified. */
  iVar5 = 0;
  puVar1 = *(undefined4 **)((int)this + 0xc);
  puVar2 = (undefined4 *)0x0;
  while (puVar3 = puVar1, puVar3 != (undefined4 *)0x0) {
    puVar2 = puVar3;
    puVar1 = (undefined4 *)puVar3[3];
  }
  while (puVar2 != (undefined4 *)0x0) {
    iVar4 = FUN_00d8d382(*puVar2,0,&GuiDataSourceObserver::RTTI_Type_Descriptor,
                         &GuiDsValue::RTTI_Type_Descriptor,0);
    if (iVar4 == 0) {
      puVar1 = (undefined4 *)puVar2[4];
      if (puVar1 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)puVar2[2];
        puVar1 = puVar2;
        while ((puVar2 = puVar3, puVar2 != (undefined4 *)0x0 && ((undefined4 *)puVar2[4] == puVar1))
              ) {
          puVar1 = puVar2;
          puVar3 = (undefined4 *)puVar2[2];
        }
      }
      else {
        puVar2 = puVar1;
        for (puVar1 = (undefined4 *)puVar1[3]; puVar1 != (undefined4 *)0x0;
            puVar1 = (undefined4 *)puVar1[3]) {
          puVar2 = puVar1;
        }
      }
    }
    else {
      iVar5 = iVar5 + 1;
      (**(code **)(*(int *)*puVar2 + 0x14))(this);
      puVar1 = *(undefined4 **)((int)this + 0xc);
      puVar2 = (undefined4 *)0x0;
      while (puVar3 = puVar1, puVar3 != (undefined4 *)0x0) {
        puVar2 = puVar3;
        puVar1 = (undefined4 *)puVar3[3];
      }
    }
  }
  return iVar5;
}

