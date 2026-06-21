// addr: 0x010bcb30
// name: PathGraph_addNodeWithConnection
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint PathGraph_addNodeWithConnection(void * this, float * position4, uint
   connectToNode_) */

uint __thiscall PathGraph_addNodeWithConnection(void *this,float *position4,uint connectToNode_)

{
  undefined4 *node;
  uint *extraout_EAX;
  uint uVar1;
  uint *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a 0x60-byte graph node, assigns a generated id, stores four
                       position components, links it into insertion and hash chains, then connects
                       it to another node. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01648bfb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  node = Mem_Alloc(0x60);
  local_4 = 0;
  if (node == (undefined4 *)0x0) {
    puVar2 = (uint *)0x0;
  }
  else {
    init_large_path_node(node);
    puVar2 = extraout_EAX;
  }
  local_4 = 0xffffffff;
  uVar1 = allocate_unused_hash_key((int)this);
  *puVar2 = uVar1;
  puVar2[4] = (uint)*position4;
  puVar2[5] = (uint)position4[1];
  puVar2[6] = (uint)position4[2];
  puVar2[7] = (uint)position4[3];
  puVar2[0x17] = *(uint *)((int)this + 0xc);
  if (*(int *)((int)this + 0xc) == 0) {
    *(uint **)((int)this + 0x10) = puVar2;
  }
  else {
    *(uint **)(*(int *)((int)this + 0xc) + 0x58) = puVar2;
  }
  *(uint **)((int)this + 0xc) = puVar2;
  puVar2[0x15] = uVar1;
  puVar2[0x14] = *(uint *)((int)this + (uVar1 & 0x3ff) * 4 + 0x18);
  *(uint **)((int)this + (uVar1 & 0x3ff) * 4 + 0x18) = puVar2;
  *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + 1;
  PathGraph_connectNodesBidirectional(this,*puVar2,connectToNode_);
  ExceptionList = local_c;
  return *puVar2;
}

