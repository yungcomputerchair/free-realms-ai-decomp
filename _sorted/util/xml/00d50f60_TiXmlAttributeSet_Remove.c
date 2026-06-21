// addr: 0x00d50f60
// name: TiXmlAttributeSet_Remove
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TiXmlAttributeSet_Remove(void * this, void * attribute) */

void __thiscall TiXmlAttributeSet_Remove(void *this,void *attribute)

{
  void *pvVar1;
  
                    /* Finds an attribute in the circular set and unlinks it, clearing its prev/next
                       pointers. Evidence: traversal starts from sentinel->next and updates
                       neighboring links only when the target is found. */
  pvVar1 = *(void **)((int)this + 0x20);
  if (pvVar1 != this) {
    while (pvVar1 != attribute) {
      pvVar1 = *(void **)((int)pvVar1 + 0x20);
      if (pvVar1 == this) {
        return;
      }
    }
    *(undefined4 *)(*(int *)((int)pvVar1 + 0x1c) + 0x20) = *(undefined4 *)((int)pvVar1 + 0x20);
    *(undefined4 *)(*(int *)((int)pvVar1 + 0x20) + 0x1c) = *(undefined4 *)((int)pvVar1 + 0x1c);
    *(undefined4 *)((int)pvVar1 + 0x20) = 0;
    *(undefined4 *)((int)pvVar1 + 0x1c) = 0;
  }
  return;
}

