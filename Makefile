.PHONY: clean All

All:
	@echo "----------Building project:[ VideoStream - Debug ]----------"
	@cd "test-opencv" && "$(MAKE)" -f  "VideoStream.mk"
clean:
	@echo "----------Cleaning project:[ VideoStream - Debug ]----------"
	@cd "test-opencv" && "$(MAKE)" -f  "VideoStream.mk" clean
