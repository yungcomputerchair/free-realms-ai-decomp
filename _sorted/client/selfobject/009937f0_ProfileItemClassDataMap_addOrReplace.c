// addr: 0x009937f0
// name: ProfileItemClassDataMap_addOrReplace
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ProfileItemClassDataMap_addOrReplace(void * this, uint * entry) */

bool __thiscall ProfileItemClassDataMap_addOrReplace(void *this,uint *entry)

{
  uint uVar1;
  int iVar2;
  
                    /* Adds or replaces a ProfileItemClassData-like entry in a 0x23-bucket map,
                       removing an existing entry with the same key and marking two owner views
                       dirty. Type is inferred from ProfileItemClassData constructors and map
                       parser. */
  uVar1 = *entry;
  iVar2 = *(int *)((int)this + (uVar1 % 0x23) * 4 + 0x10);
  do {
    if (iVar2 == 0) {
LAB_00993836:
      FUN_008d9b30(*entry,entry);
      iVar2 = *(int *)((int)this + 0x178);
      *(undefined1 *)(*(int *)(iVar2 + 0xe0) + 0x25c) = 1;
      FUN_00c31fc0();
      *(undefined1 *)(*(int *)(iVar2 + 0xe4) + 0x25c) = 1;
      FUN_00c32040();
      FUN_00c33910(0);
      return true;
    }
    if (*(uint *)(iVar2 + 0x28) == uVar1) {
      Loggable_sub_009930f0(uVar1);
      goto LAB_00993836;
    }
    iVar2 = *(int *)(iVar2 + 0x24);
  } while( true );
}

