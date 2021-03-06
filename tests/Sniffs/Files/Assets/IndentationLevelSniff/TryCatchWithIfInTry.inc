<?php

class TryCatchWithIfInTry
{
    public function doSomething($event)
    {
        try {
            if ($this->eventShouldBeCollected($event)) {
                $this->collectEvent($event);
            }

            $this->fire($event);
        } catch (\Exception $e) {
            $this->log($e);
        }
    }
}
