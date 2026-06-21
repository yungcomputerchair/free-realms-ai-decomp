// addr: 0x00d53480
// name: TiXmlDeclaration_Clone
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * TiXmlDeclaration_Clone(void)

{
  undefined4 *this;
  
                    /* Allocates and returns a cloned TiXmlDeclaration. Evidence: allocates 0x38
                       bytes, constructs TiXmlDeclaration, and copies declaration fields via
                       00d52620. */
  this = Mem_Alloc(0x38);
  if (this != (undefined4 *)0x0) {
    TiXmlNode_ctor(this,5);
    *this = TiXmlDeclaration::vftable;
    this[0xb] = &DAT_01bf2c00;
    this[0xc] = &DAT_01bf2c00;
    this[0xd] = &DAT_01bf2c00;
    FUN_00d52620(this);
    return this;
  }
  return (undefined4 *)0x0;
}

