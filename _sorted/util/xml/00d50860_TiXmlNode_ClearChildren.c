// addr: 0x00d50860
// name: TiXmlNode_ClearChildren
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TiXmlNode_ClearChildren(void * this) */

void __fastcall TiXmlNode_ClearChildren(void *this)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
                    /* Deletes all child nodes and clears the first/last child pointers. Evidence:
                       walks the child chain and invokes each child's deleting destructor, then
                       zeros offsets 0x18 and 0x1c. */
  puVar1 = *(undefined4 **)((int)this + 0x18);
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar1;
    puVar1 = (undefined4 *)puVar1[10];
    (*(code *)*puVar2)(1);
  }
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  return;
}

