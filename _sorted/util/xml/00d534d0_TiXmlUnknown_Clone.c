// addr: 0x00d534d0
// name: TiXmlUnknown_Clone
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * TiXmlUnknown_Clone(void)

{
  undefined4 *this;
  
                    /* Allocates and returns a cloned TiXmlUnknown node. Evidence: allocates 0x2c
                       bytes, constructs TiXmlUnknown, and invokes the TinyXML copy thunk. */
  this = Mem_Alloc(0x2c);
  if (this != (undefined4 *)0x0) {
    TiXmlNode_ctor(this,3);
    *this = TiXmlUnknown::vftable;
    thunk_FUN_00d50820(this);
    return this;
  }
  return (undefined4 *)0x0;
}

