// addr: 0x010bc4f0
// name: PathGraph_connectNodesOneWay
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool PathGraph_connectNodesOneWay(uint fromNode_, uint toNode_) */

bool __thiscall PathGraph_connectNodesOneWay(void *this,uint fromNode_,uint toNode_)

{
  uint key_;
  uint *table_;
  uint *puVar1;
  uint *puVar2;
  undefined4 *node;
  uint *extraout_EAX;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
                    /* Adds a missing weighted adjacency entry from one graph node to another,
                       computing the edge weight as Euclidean distance between four position floats.
                        */
  local_14 = 0xffffffff;
  puStack_18 = &LAB_01648b0b;
  local_1c = ExceptionList;
  key_ = DAT_01b839d8 ^ (uint)&stack0xffffffb0;
  ExceptionList = &local_1c;
  table_ = lookup_1024_hash_canonical_node(this,fromNode_,key_);
  puVar1 = lookup_1024_hash_canonical_node(this,toNode_,key_);
  if (((table_ != (uint *)0x0) && (puVar1 != (uint *)0x0)) && (fromNode_ != toNode_)) {
    puVar2 = lookup_8_hash_canonical_node((int)table_,toNode_);
    if (puVar2 == (uint *)0x0) {
      node = Mem_Alloc(0x18);
      local_14 = 0;
      if (node == (undefined4 *)0x0) {
        puVar2 = (uint *)0x0;
      }
      else {
        init_small_path_node(node);
        puVar2 = extraout_EAX;
      }
      local_14 = 0xffffffff;
      *puVar2 = toNode_;
      puVar2[1] = (uint)SQRT(((float)table_[7] - (float)puVar1[7]) *
                             ((float)table_[7] - (float)puVar1[7]) +
                             ((float)table_[6] - (float)puVar1[6]) *
                             ((float)table_[6] - (float)puVar1[6]) +
                             ((float)table_[5] - (float)puVar1[5]) *
                             ((float)table_[5] - (float)puVar1[5]) +
                             ((float)table_[4] - (float)puVar1[4]) *
                             ((float)table_[4] - (float)puVar1[4]));
      insert_node_into_8_hash(table_ + 8,toNode_,(uint)puVar2,key_);
      ExceptionList = local_1c;
      return true;
    }
  }
  ExceptionList = local_1c;
  return false;
}

