// addr: 0x012a9340
// name: DeckMap_findByName
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void DeckMap_findByName(void * this, void * out, void * name) */

void __thiscall DeckMap_findByName(void *this,void *out,void *name)

{
  void *pvVar1;
  int iVar2;
  void **ppvVar3;
  int iVar4;
  void *local_10;
  int local_c;
  void *local_8;
  undefined4 local_4;
  
                    /* Findes a deck-map entry matching the supplied string key using lower_bound
                       and verifies equality before returning the iterator. If no equal key exists,
                       it returns the map's end/sentinel iterator. */
  iVar2 = RBTreeString_lowerBound_deckMap(name);
  local_c = iVar2;
  if (this == (void *)0x0) {
    FUN_00d83c2d();
  }
  local_10 = this;
  if (iVar2 != *(int *)((int)this + 4)) {
    if (*(uint *)(iVar2 + 0x24) < 0x10) {
      iVar4 = iVar2 + 0x10;
    }
    else {
      iVar4 = *(int *)(iVar2 + 0x10);
    }
    iVar2 = FUN_00f942a0(0,*(undefined4 *)((int)name + 0x14),iVar4,*(undefined4 *)(iVar2 + 0x20));
    if (-1 < iVar2) {
      ppvVar3 = &local_10;
      goto LAB_012a93a3;
    }
  }
  local_4 = *(undefined4 *)((int)this + 4);
  local_8 = this;
  ppvVar3 = &local_8;
LAB_012a93a3:
  pvVar1 = ppvVar3[1];
  *(void **)out = *ppvVar3;
  *(void **)((int)out + 4) = pvVar1;
  return;
}

