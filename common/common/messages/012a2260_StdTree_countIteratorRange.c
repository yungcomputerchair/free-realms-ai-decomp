// addr: 0x012a2260
// name: StdTree_countIteratorRange
// subsystem: common/common/messages
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StdTree_countIteratorRange(int beginOwner_, int beginNode_, int
   endOwner_, int endNode_, int * countOut) */

void __cdecl
StdTree_countIteratorRange(int beginOwner_,int beginNode_,int endOwner_,int endNode_,int *countOut)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = countOut;
  iVar2 = endNode_;
                    /* Counts entries in a std::map/std::set iterator range by validating iterator
                       ownership, incrementing the output count, and advancing until the end
                       iterator is reached. Evidence is the iterator validation calls, loop over
                       begin/end, and caller 012a4130 using the result before erasing the range. */
  iVar1 = endOwner_;
  while( true ) {
    if ((beginOwner_ == 0) || (beginOwner_ != iVar1)) {
      FUN_00d83c2d();
    }
    if (beginNode_ == iVar2) break;
    *piVar3 = *piVar3 + 1;
    MessageDB_RbTreeIterator_next(&beginOwner_);
  }
  return;
}

