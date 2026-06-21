// addr: 0x01486f00
// name: ArgTree_insertUniqueWithHint
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ArgTree_insertUniqueWithHint(void * this, void * outPair, void *
   hintContainer, void * hintNode, int * key) */

void * __thiscall
ArgTree_insertUniqueWithHint(void *this,void *outPair,void *hintContainer,void *hintNode,int *key)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  undefined4 *puVar6;
  bool bVar7;
  void *local_c;
  undefined4 local_8;
  
                    /* Tree insertion helper for an ordered int-key red-black tree. It uses the
                       supplied hint when possible, otherwise searches for an existing key and
                       returns the existing iterator/pair. */
  if (*(int *)((int)this + 8) == 0) {
    FUN_01486c50(outPair,1,*(undefined4 *)((int)this + 4),key);
    return outPair;
  }
  pvVar1 = (void *)**(int **)((int)this + 4);
  if ((hintContainer == (void *)0x0) || (hintContainer != this)) {
    FUN_00d83c2d();
  }
  if (hintNode == pvVar1) {
    if (*key < *(int *)((int)hintNode + 0xc)) {
      FUN_01486c50(outPair,1,hintNode,key);
      return outPair;
    }
  }
  else {
    pvVar1 = *(void **)((int)this + 4);
    if ((hintContainer == (void *)0x0) || (hintContainer != this)) {
      FUN_00d83c2d();
    }
    if (hintNode == pvVar1) {
      iVar2 = *(int *)(*(int *)((int)this + 4) + 8);
      if (*(int *)(iVar2 + 0xc) < *key) {
        FUN_01486c50(outPair,0,iVar2,key);
        return outPair;
      }
    }
    else {
      iVar2 = *key;
      iVar3 = *(int *)((int)hintNode + 0xc);
      bVar7 = SBORROW4(iVar3,iVar2);
      iVar4 = iVar3 - iVar2;
      if (iVar2 < iVar3) {
        FUN_01485e90();
        iVar4 = *key;
        if (*(int *)((int)hintNode + 0xc) < iVar4) {
          if (*(char *)(*(int *)((int)hintNode + 8) + 0x15) != '\0') {
            FUN_01486c50(outPair,0,hintNode,key);
            return outPair;
          }
          FUN_01486c50(outPair,1,hintNode,key);
          return outPair;
        }
        bVar7 = SBORROW4(*(int *)((int)hintNode + 0xc),iVar4);
        iVar4 = *(int *)((int)hintNode + 0xc) - iVar4;
      }
      if (bVar7 != iVar4 < 0) {
        local_8 = *(undefined4 *)((int)this + 4);
        local_c = this;
        FUN_01485df0();
        cVar5 = FUN_01485d30(&local_c);
        if ((cVar5 != '\0') || (*key < *(int *)((int)hintNode + 0xc))) {
          if (*(char *)(*(int *)((int)hintNode + 8) + 0x15) != '\0') {
            FUN_01486c50(outPair,0,hintNode,key);
            return outPair;
          }
          FUN_01486c50(outPair,1,hintNode,key);
          return outPair;
        }
      }
    }
  }
  puVar6 = (undefined4 *)FUN_01486e40(&local_c,key);
  *(undefined4 *)outPair = *puVar6;
  *(undefined4 *)((int)outPair + 4) = puVar6[1];
  return outPair;
}

