// addr: 0x007b7bf0
// name: SoeUtil_IStringPairList_appendNode
// subsystem: common/util/binxml_reader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SoeUtil_IStringPairList_appendNode(void * owner) */

void __fastcall SoeUtil_IStringPairList_appendNode(void *owner)

{
  void *node;
  int extraout_EAX;
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a 0x38-byte node, initializes it with two IString members, and
                       appends it to a tail-linked list at owner offsets 0x4f0-0x4f8. The exact
                       owner class is unknown. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0155ec9b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  node = Mem_Alloc(0x38);
  local_4 = 0;
  if (node == (void *)0x0) {
    iVar1 = 0;
  }
  else {
    SoeUtil_IStringPairListNode_ctor(node);
    iVar1 = extraout_EAX;
  }
  *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)((int)owner + 0x4f4);
  if (*(int *)((int)owner + 0x4f4) == 0) {
    *(int *)((int)owner + 0x4f0) = iVar1;
  }
  else {
    *(int *)(*(int *)((int)owner + 0x4f4) + 0x34) = iVar1;
  }
  *(int *)((int)owner + 0x4f4) = iVar1;
  *(int *)((int)owner + 0x4f8) = *(int *)((int)owner + 0x4f8) + 1;
  ExceptionList = local_c;
  return;
}

