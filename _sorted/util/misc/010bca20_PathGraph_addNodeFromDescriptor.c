// addr: 0x010bca20
// name: PathGraph_addNodeFromDescriptor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint PathGraph_addNodeFromDescriptor(void * this, void * descriptor) */

uint __thiscall PathGraph_addNodeFromDescriptor(void *this,void *descriptor)

{
  uint *extraout_EAX;
  uint uVar1;
  uint *puVar2;
  float local_3c;
  uint local_38;
  undefined4 *local_34;
  float local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
                    /* Extracts position and up to two neighbor ids from a descriptor, allocates and
                       hashes a graph node, then connects it bidirectionally to the listed
                       neighbors. */
  local_14 = 0xffffffff;
  puStack_18 = &LAB_01648bcb;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  find_nearest_path_segment
            (this,(int)descriptor,&local_30,&local_3c,&local_38,
             (uint *)(DAT_01b839d8 ^ (uint)&stack0xffffffb0));
  local_34 = Mem_Alloc(0x60);
  local_14 = 0;
  if (local_34 == (undefined4 *)0x0) {
    puVar2 = (uint *)0x0;
  }
  else {
    init_large_path_node(local_34);
    puVar2 = extraout_EAX;
  }
  local_14 = 0xffffffff;
  uVar1 = allocate_unused_hash_key((int)this);
  puVar2[4] = (uint)local_30;
  puVar2[5] = local_2c;
  puVar2[6] = local_28;
  *puVar2 = uVar1;
  puVar2[7] = local_24;
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
  PathGraph_connectNodesBidirectional(this,*puVar2,(uint)local_3c);
  PathGraph_connectNodesBidirectional(this,*puVar2,local_38);
  ExceptionList = local_1c;
  return *puVar2;
}

