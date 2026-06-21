// addr: 0x01404480
// name: FUN_01404480
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint compare_action_priority(int lhsKind_, int lhsOrder_, int rhsKind_, int
   rhsOrder_) */

uint compare_action_priority(int lhsKind_,int lhsOrder_,int rhsKind_,int rhsOrder_)

{
  bool bVar1;
  
                    /* Compares two action/category ids with a fixed cyclic ordering and falls back
                       to same-kind sequence ordering; exact enum/class is unknown. */
  if (lhsKind_ == 0x222e6) {
    bVar1 = rhsKind_ == 0x222e7;
  }
  else if (lhsKind_ == 0x222e8) {
    bVar1 = rhsKind_ == 0x222e6;
  }
  else {
    if (lhsKind_ != 0x222e7) goto LAB_014044b5;
    bVar1 = rhsKind_ == 0x222e8;
  }
  if (bVar1) {
    return 1;
  }
LAB_014044b5:
  if ((lhsKind_ == rhsKind_) && (rhsOrder_ < lhsOrder_)) {
    return 1;
  }
  return 2;
}

