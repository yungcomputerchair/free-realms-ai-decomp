// addr: 0x007e3020
// name: BinXMLDeserialize_appendMaskEntry
// subsystem: common/util/binxml_reader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void BinXMLDeserialize_appendMaskEntry(void * list, uint * value) */

void __thiscall BinXMLDeserialize_appendMaskEntry(void *this,void *list,uint *value)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Allocates/appends a list node, copies a 32-bit value into the node, links it
                       at the tail and into an auxiliary list, and increments a count. It is used by
                       a bitmask-driven deserializer at 007e3160. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_01563c91;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = (**(code **)(*(int *)this + 4))(DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)list;
  }
  *(undefined4 *)(iVar1 + 8) = *(undefined4 *)((int)this + 0xc);
  *(undefined4 *)(iVar1 + 4) = 0;
  if (*(int *)((int)this + 0xc) == 0) {
    *(int *)((int)this + 8) = iVar1;
  }
  else {
    *(int *)(*(int *)((int)this + 0xc) + 4) = iVar1;
  }
  *(int *)((int)this + 0xc) = iVar1;
  *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)((int)this + 0x14);
  *(int *)((int)this + 0x14) = iVar1;
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  ExceptionList = local_c;
  return;
}

