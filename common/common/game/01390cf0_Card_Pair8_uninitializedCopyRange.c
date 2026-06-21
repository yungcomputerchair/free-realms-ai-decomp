// addr: 0x01390cf0
// name: Card_Pair8_uninitializedCopyRange
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Card_Pair8_uninitializedCopyRange(uint this_, undefined4 a2_, undefined4
   first_, undefined4 a4_, undefined4 last_, undefined4 dst_) */

void __thiscall
Card_Pair8_uninitializedCopyRange
          (void *this,uint this_,undefined4 a2_,undefined4 first_,undefined4 a4_,undefined4 last_,
          undefined4 dst_)

{
  undefined4 local_4;
  
                    /* Thin wrapper around Pair8_uninitializedCopyRange for 8-byte pair-like
                       elements used by Card containers. */
  local_4 = (uint)this & 0xffffff00;
  Pair8_uninitializedCopyRange(a2_,a4_,last_,this,last_,local_4);
  return;
}

