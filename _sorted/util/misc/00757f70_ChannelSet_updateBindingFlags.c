// addr: 0x00757f70
// name: ChannelSet_updateBindingFlags
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ChannelSet_updateBindingFlags(void * this) */

void __fastcall ChannelSet_updateBindingFlags(void *this)

{
  byte *pbVar1;
  undefined4 *puVar2;
  byte bVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  
                    /* Iterates channel/binding records, resolves a source pointer or default
                       pointer, calls a per-binding vtable method at +0x1c, and ORs the result into
                       a flag byte. */
  iVar5 = 0;
  if (0 < *(int *)((int)this + 0x20)) {
    iVar6 = 0;
    do {
      puVar2 = *(undefined4 **)
                (*(int *)(*(int *)(*(int *)((int)this + 0xc) + 0xc0) + iVar5 * 4) + 0x38);
      puVar4 = PTR_PTR_01b2cddc;
      if (puVar2 != (undefined4 *)0x0) {
        puVar4 = (undefined *)*puVar2;
      }
      puVar2 = *(undefined4 **)(*(int *)((int)this + 0x1c) + 4 + iVar6);
      bVar3 = (**(code **)(*(int *)*puVar2 + 0x1c))(puVar4);
      pbVar1 = (byte *)(puVar2 + 1);
      *pbVar1 = *pbVar1 | bVar3;
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 0xc;
    } while (iVar5 < *(int *)((int)this + 0x20));
  }
  return;
}

