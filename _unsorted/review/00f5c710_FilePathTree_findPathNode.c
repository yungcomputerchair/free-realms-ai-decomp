// addr: 0x00f5c710
// name: FilePathTree_findPathNode
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int * FilePathTree_findPathNode(void * this, int * outNode, char * path, char
   separator_) */

int * __thiscall FilePathTree_findPathNode(void *this,int *outNode,char *path,char separator_)

{
  char cVar1;
  char *pcVar2;
  int *piVar3;
  char cVar4;
  void *this_00;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined3 in_stack_0000000d;
  int *outNode_00;
  undefined4 uVar9;
  int local_8;
  int local_4;
  
  piVar3 = outNode;
                    /* Recursively walks a slash-separated path tree, handling . and .. segments,
                       matching child names, and returning the found node. */
  local_8 = *(int *)this;
  if (((local_8 == 0) || (path == (char *)0x0)) || (*path == '\0')) {
    *outNode = local_8;
    return outNode;
  }
  pcVar6 = path;
  iVar5 = local_8;
  if (*path == separator_) {
    do {
      local_8 = iVar5;
      if (local_8 == 0) break;
      iVar5 = *(int *)(local_8 + 0xc);
    } while (*(int *)(local_8 + 0xc) != 0);
    pcVar6 = path + 1;
  }
  cVar1 = *pcVar6;
  while (cVar1 == separator_) {
    pcVar6 = pcVar6 + 1;
    cVar1 = *pcVar6;
  }
  cVar1 = *pcVar6;
  pcVar8 = pcVar6;
  cVar4 = cVar1;
  if (cVar1 != '\0') {
    do {
      if (cVar4 == separator_) break;
      pcVar7 = pcVar8 + 1;
      pcVar8 = pcVar8 + 1;
      cVar4 = *pcVar7;
    } while (*pcVar7 != '\0');
    if (pcVar6 != pcVar8) {
      cVar4 = *pcVar8;
      pcVar7 = pcVar8;
      while (cVar4 == separator_) {
        pcVar7 = pcVar7 + 1;
        cVar4 = *pcVar7;
      }
      if (cVar1 == '.') {
        if (pcVar6 + 1 == pcVar8) {
          FilePathTree_findPathNode(&local_8,outNode,pcVar7,separator_);
          return piVar3;
        }
        if ((pcVar6[1] == '.') && (pcVar6 + 2 == pcVar8)) {
          outNode_00 = outNode;
          uVar9 = _separator_;
          this_00 = (void *)FUN_00f59ec0(&outNode);
          FilePathTree_findPathNode(this_00,outNode_00,pcVar7,(char)uVar9);
          return piVar3;
        }
      }
      pcVar2 = *(char **)(local_8 + 0x18);
      while( true ) {
        if (pcVar2 == (char *)0x0) {
          *outNode = 0;
          return outNode;
        }
        if (((*(int *)(pcVar2 + 0x10) != 0) &&
            (iVar5 = FUN_00f59390(*(int *)(pcVar2 + 0x10),pcVar6,pcVar8), iVar5 == 0)) &&
           (path = pcVar2, FilePathTree_findPathNode(&path,&local_4,pcVar7,(char)_separator_),
           local_4 != 0)) break;
        pcVar2 = *(char **)(pcVar2 + 0x24);
      }
      *outNode = local_4;
      return outNode;
    }
  }
  *outNode = local_8;
  return outNode;
}

