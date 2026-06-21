// addr: 0x01343ac0
// name: PlayElementKeywordMap_copyCtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * PlayElementKeywordMap_copyCtor(void * this, void * other) */

void * __thiscall PlayElementKeywordMap_copyCtor(void *this,void *other)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* Constructs an rb-tree style keyword map sentinel, then clones nodes from
                       another map. The exact container/member name is inferred from PlayElement
                       nearby constructors and keyword/suppress-effect users. */
  local_8 = 0xffffffff;
  puStack_c = &LAB_0167c980;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_01341670();
  *(int *)((int)this + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x21) = 1;
  *(int *)(*(int *)((int)this + 4) + 4) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  *(int *)(*(int *)((int)this + 4) + 8) = *(int *)((int)this + 4);
  *(undefined4 *)((int)this + 8) = 0;
  local_8 = 0;
  PlayElementSuppressEffectMap_copyNodes(this,other);
  ExceptionList = local_10;
  return this;
}

