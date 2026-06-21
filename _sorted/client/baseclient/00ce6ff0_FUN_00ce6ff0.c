// addr: 0x00ce6ff0
// name: FUN_00ce6ff0
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int inventoryDataSource_refreshVisibleItems(void * this) */

int __fastcall inventoryDataSource_refreshVisibleItems(void *this)

{
  int iVar1;
  int iVar2;
  
                    /* Clears a target list via the vtable at offset 0x34, then walks an inventory
                       linked list and adds each item id through another virtual call. */
  (**(code **)(*(int *)((int)this + 0x34) + 0xc))();
  iVar2 = *(int *)((int)this + 0x254) + 0xa8;
  for (iVar1 = *(int *)(*(int *)((int)this + 0x254) + 0xb0); iVar1 != 0;
      iVar1 = *(int *)(iVar1 + 0x128)) {
    iVar2 = (**(code **)(*(int *)((int)this + 0x34) + 4))(*(undefined4 *)(iVar1 + 8));
  }
  return iVar2;
}

