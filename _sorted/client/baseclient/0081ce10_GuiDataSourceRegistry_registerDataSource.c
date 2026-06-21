// addr: 0x0081ce10
// name: GuiDataSourceRegistry_registerDataSource
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuiDataSourceRegistry_registerDataSource(void * registry, void *
   dataSource) */

void __thiscall GuiDataSourceRegistry_registerDataSource(void *this,void *registry,void *dataSource)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *piVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Registers a GUI data source by wrapping it in a node, inserting it into hash
                       tables keyed by the data source virtual get-key/name method, rejecting
                       duplicates, and notifying listeners for that key. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0156a24b;
  local_c = ExceptionList;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  piVar4 = Mem_Alloc(0x24);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    *piVar4 = (int)registry;
    piVar4[3] = 0;
    piVar4[4] = 0;
    piVar4[1] = 0;
    piVar4[2] = 0;
    piVar4[7] = 0;
    piVar4[8] = 0;
    piVar4[5] = 0;
    piVar4[6] = 0;
    LOCK();
    *(int *)(*piVar4 + 4) = *(int *)(*piVar4 + 4) + 1;
    UNLOCK();
  }
  local_4 = 0xffffffff;
  uVar3 = (**(code **)(*(int *)*piVar4 + 0x28))(uVar3);
  for (iVar1 = *(int *)((int)this + (uVar3 % 1000) * 4 + 0xaea4); iVar1 != 0;
      iVar1 = *(int *)(iVar1 + 4)) {
    if (*(uint *)(iVar1 + 8) == uVar3) {
      piVar2 = (int *)*piVar4;
      piVar7 = piVar2 + 1;
      LOCK();
      iVar1 = *piVar7 + -1;
      *piVar7 = iVar1;
      UNLOCK();
      if (iVar1 == 0) {
        (**(code **)(*piVar2 + 4))();
      }
                    /* WARNING: Subroutine does not return */
      _free(piVar4);
    }
  }
  piVar7 = piVar4;
  uVar5 = (**(code **)(*(int *)*piVar4 + 0x28))(piVar4);
  FUN_0081c450(uVar5,piVar7);
  uVar3 = (**(code **)(*(int *)*piVar4 + 0x28))();
  puVar6 = *(undefined4 **)((int)this + (uVar3 % 1000) * 4 + 0xbe54);
  while( true ) {
    if (puVar6 == (undefined4 *)0x0) {
      ExceptionList = local_c;
      return;
    }
    if (puVar6[2] == uVar3) break;
    puVar6 = (undefined4 *)puVar6[1];
  }
  do {
    (**(code **)(*(int *)*puVar6 + 0xc))(registry);
    piVar4 = puVar6 + 2;
    puVar6 = (undefined4 *)puVar6[1];
    while( true ) {
      if (puVar6 == (undefined4 *)0x0) {
        ExceptionList = local_c;
        return;
      }
      if (puVar6[2] == *piVar4) break;
      puVar6 = (undefined4 *)puVar6[1];
    }
  } while( true );
}

