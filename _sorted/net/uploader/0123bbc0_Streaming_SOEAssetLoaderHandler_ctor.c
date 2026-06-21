// addr: 0x0123bbc0
// name: Streaming_SOEAssetLoaderHandler_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Streaming_SOEAssetLoaderHandler_ctor(void * this, void *
   handlerContext) */

void * __thiscall Streaming_SOEAssetLoaderHandler_ctor(void *this,void *handlerContext)

{
                    /* Constructs Streaming::SOEAssetLoaderHandler from
                       AssetDeliveryHandlerInterface and stores one context pointer. Vtable symbols
                       directly identify the class hierarchy; likely a weak non-uploader hit. */
  *(undefined ***)this = AssetManagement::AssetDeliveryHandlerInterface::vftable;
  *(void **)((int)this + 4) = handlerContext;
  *(undefined ***)this = Streaming::SOEAssetLoaderHandler::vftable;
  return this;
}

