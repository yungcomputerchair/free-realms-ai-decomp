// addr: 0x01323e40
// name: VariantPropertyMap_getIntOrZero
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int VariantPropertyMap_getIntOrZero(void * map, int key_) */

int __thiscall VariantPropertyMap_getIntOrZero(void *this,void *map,int key_)

{
  int iVar1;
  int local_8;
  int local_4;
  
                    /* Gets an integer-like value from a variant/property map entry when its type
                       tag is 2, otherwise returns 0. The value pointer is stored at node+0x10, with
                       tag at +4 and data at +8. */
  FUN_01323910(&local_8,&map);
  iVar1 = *(int *)((int)this + 0x68);
  if ((int)this + 100 != local_8) {
    FUN_00d83c2d();
  }
  if (iVar1 != local_4) {
    if (local_8 == 0) {
      FUN_00d83c2d();
    }
    if (local_4 == *(int *)(local_8 + 4)) {
      FUN_00d83c2d();
    }
    if (*(int *)(*(int *)(local_4 + 0x10) + 4) == 2) {
      return *(int *)(*(int *)(local_4 + 0x10) + 8);
    }
  }
  return 0;
}

