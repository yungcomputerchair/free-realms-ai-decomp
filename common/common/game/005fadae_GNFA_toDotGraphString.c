// addr: 0x005fadae
// name: GNFA_toDotGraphString
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool GNFA_toDotGraphString(void * this, void * outGraph) */

bool __thiscall GNFA_toDotGraphString(void *this,void *outGraph)

{
  undefined4 *this_00;
  undefined4 *puVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined *puVar7;
  undefined1 local_30 [4];
  undefined4 *local_2c;
  undefined1 local_24 [8];
  undefined1 local_1c [8];
  undefined4 *local_14;
  undefined4 *local_10;
  uint local_c;
  undefined4 *local_8;
  
                    /* Builds a GraphViz DOT representation of a GNFA into the supplied string,
                       including accepting nodes and labeled transitions. Evidence is 'digraph G {',
                       node labels with peripheries=3, and 'n%d -> n%d [label="%s"]'. */
  local_8 = &DAT_01bc7e28;
  RbTree_initHeader(local_30);
  if (outGraph == (void *)0x0) {
    bVar2 = false;
  }
  else {
    ParserAst_renumberReachableNodes();
    ParserAst_collectReachableNodes(*(undefined4 *)this,local_30);
    FUN_004e5340("digraph G {\n");
    CheckedTreeIterator_ctor_nodeFlag21A(*local_2c,local_30);
    CheckedTreeIterator_ctor_nodeFlag21A(local_2c,local_30);
    bVar2 = CheckedTreeIterator_equals_nodeFlag21A(local_1c,local_24);
    while (!bVar2) {
      piVar3 = (int *)RbTreeIterator_getValue();
      puVar1 = (undefined4 *)*piVar3;
      if (puVar1[1] != 0) {
        local_10 = &DAT_01bc7e28;
        FUN_004f3cc4(&local_10,"n%d [label=\"n%d: a%d\" peripheries=3]\n",*puVar1,*puVar1,puVar1[1])
        ;
        FUN_004e54dd(&local_10);
        FUN_004d83ba();
      }
      local_c = 0;
      this_00 = puVar1 + 2;
      iVar4 = StdVector_size(this_00);
      if (iVar4 != 0) {
        do {
          local_14 = &DAT_01bc7e28;
          local_10 = &DAT_01bc7e28;
          piVar3 = StdVector_atElementPtr4(this_00,local_c);
          if (*piVar3 - 0x20U < 0x5f) {
            puVar7 = &DAT_0179fbcc;
          }
          else {
            puVar7 = &DAT_01770978;
          }
          FUN_004f3cc4(&local_10,puVar7,*piVar3);
          puVar5 = (undefined4 *)StdVectorDword_at_005db38b(puVar1 + 6,local_c);
          FUN_004f3cc4(&local_14,"n%d -> n%d [label=\"%s\"]\n",*puVar1,*(undefined4 *)*puVar5,
                       local_10);
          FUN_004e54dd(&local_14);
          FUN_004d83ba();
          FUN_004d83ba();
          local_c = local_c + 1;
          uVar6 = StdVector_size(this_00);
        } while (local_c < uVar6);
      }
      RbTreeIterator_increment(local_1c);
      CheckedTreeIterator_ctor_nodeFlag21A(local_2c,local_30);
      bVar2 = CheckedTreeIterator_equals_nodeFlag21A(local_1c,local_24);
    }
    FUN_004e554b(&DAT_0179fbac);
    puVar1 = *(undefined4 **)outGraph;
    *(undefined4 **)outGraph = local_8;
    bVar2 = true;
    local_8 = puVar1;
  }
  CheckedTreeNode21A_destroyAndFree(local_30);
  FUN_004d83ba();
  return bVar2;
}

