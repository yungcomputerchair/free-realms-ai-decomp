// addr: 0x00d53320
// name: TiXmlComment_Clone
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * TiXmlComment_Clone(void)

{
  undefined4 *this;
  
                    /* Allocates and returns a cloned TiXmlComment, or null if allocation fails.
                       Evidence: allocates 0x2c bytes, constructs TiXmlComment, and invokes the
                       comment/base copy thunk. */
  this = Mem_Alloc(0x2c);
  if (this != (undefined4 *)0x0) {
    TiXmlNode_ctor(this,2);
    *this = TiXmlComment::vftable;
    thunk_FUN_00d50820(this);
    return this;
  }
  return (undefined4 *)0x0;
}

