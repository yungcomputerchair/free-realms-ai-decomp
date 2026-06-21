// addr: 0x01343e80
// name: PlayElementSuppressEffectMap_copyCtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * PlayElementSuppressEffectMap_copyCtor(void * this, void * source) */

void * __thiscall PlayElementSuppressEffectMap_copyCtor(void *this,void *source)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Copy-constructs the red-black tree used for PlayElement suppress-effect data,
                       then returns this. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167c9f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  PlayElementKeywordMap_copyCtor(this,source);
  ExceptionList = local_c;
  return this;
}

