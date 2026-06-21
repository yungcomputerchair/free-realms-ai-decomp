// addr: 0x005f3ee0
// name: ParserAst_collectReachableNodes
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void ParserAst_collectReachableNodes(int param_1,void *param_2)

{
  void *this;
  bool bVar1;
  int iVar2;
  void *outIter;
  void *this_00;
  undefined4 *puVar3;
  uint uVar4;
  uint index;
  void *vec;
  uint *unaff_EDI;
  uint *key;
  undefined1 local_1c [4];
  undefined1 local_18 [8];
  uint local_10 [3];
  
                    /* Recursively walks parser AST child vectors from a root node and inserts each
                       reachable node into a tree/set if it is not already present. Evidence is
                       recursive self-call, vector iteration, and tree lookup/insert helper
                       FUN_005f223c. */
  this = param_2;
  UIntRbTree_insertUniqueLowerBound_nodeFlag21A(param_2,local_1c,&param_1,unaff_EDI);
  vec = (void *)(param_1 + 0x18);
  index = 0;
  iVar2 = StdVectorDword_size(vec);
  if (iVar2 != 0) {
    do {
      CheckedTreeIterator_ctor_nodeFlag21A(*(undefined4 *)((int)this + 4),this);
      key = local_10;
      outIter = (void *)StdVectorDword_at_005db38b(vec,index);
      StdRbTreeUInt_find_nodeFlag21A(this,local_18,outIter,key);
      bVar1 = CheckedTreeIterator_equals_nodeFlag21A(this_00,key);
      if (bVar1) {
        puVar3 = (undefined4 *)StdVectorDword_at_005db38b(vec,index);
        ParserAst_collectReachableNodes(*puVar3,this);
      }
      index = index + 1;
      uVar4 = StdVectorDword_size(vec);
    } while (index < uVar4);
  }
  return;
}

