// addr: 0x010bc8b0
// name: PathGraph_connectNodesBidirectional
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PathGraph_connectNodesBidirectional(uint nodeA_, uint nodeB_) */

void __thiscall PathGraph_connectNodesBidirectional(void *this,uint nodeA_,uint nodeB_)

{
  uint key_;
  uint *puVar1;
  uint *table_;
  uint *puVar2;
  float fVar3;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
                    /* Looks up two graph nodes, computes Euclidean 4D distance between their
                       position fields, and adds missing weighted adjacency entries in both
                       directions. */
  local_14 = 0xffffffff;
  puStack_18 = &LAB_01648b96;
  local_1c = ExceptionList;
  key_ = DAT_01b839d8 ^ (uint)&stack0xffffffb0;
  ExceptionList = &local_1c;
  puVar1 = lookup_1024_hash_canonical_node(this,nodeA_,key_);
  table_ = lookup_1024_hash_canonical_node(this,nodeB_,key_);
  if ((puVar1 != (uint *)0x0) && (table_ != (uint *)0x0)) {
    fVar3 = SQRT(((float)puVar1[7] - (float)table_[7]) * ((float)puVar1[7] - (float)table_[7]) +
                 ((float)puVar1[6] - (float)table_[6]) * ((float)puVar1[6] - (float)table_[6]) +
                 ((float)puVar1[5] - (float)table_[5]) * ((float)puVar1[5] - (float)table_[5]) +
                 ((float)puVar1[4] - (float)table_[4]) * ((float)puVar1[4] - (float)table_[4]));
    puVar2 = lookup_8_hash_canonical_node((int)puVar1,nodeB_);
    if (puVar2 == (uint *)0x0) {
      puVar2 = Mem_Alloc(0x18);
      if (puVar2 == (uint *)0x0) {
        puVar2 = (uint *)0x0;
      }
      else {
        *puVar2 = 0xffffffff;
        puVar2[1] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
      }
      local_14 = 0xffffffff;
      *puVar2 = nodeB_;
      puVar2[1] = (uint)fVar3;
      insert_node_into_8_hash(puVar1 + 8,nodeB_,(uint)puVar2,key_);
    }
    puVar1 = lookup_8_hash_canonical_node((int)table_,nodeA_);
    if (puVar1 == (uint *)0x0) {
      puVar1 = Mem_Alloc(0x18);
      if (puVar1 == (uint *)0x0) {
        puVar1 = (uint *)0x0;
      }
      else {
        *puVar1 = 0xffffffff;
        puVar1[1] = 0;
        puVar1[4] = 0;
        puVar1[5] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
      }
      local_14 = 0xffffffff;
      *puVar1 = nodeA_;
      puVar1[1] = (uint)fVar3;
      insert_node_into_8_hash(table_ + 8,nodeA_,(uint)puVar1,key_);
    }
  }
  ExceptionList = local_1c;
  return;
}

