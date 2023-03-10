# Generated by Selenium IDE
import pytest
import time
import json
from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.common.action_chains import ActionChains
from selenium.webdriver.support import expected_conditions
from selenium.webdriver.support.wait import WebDriverWait
from selenium.webdriver.common.keys import Keys
from selenium.webdriver.common.desired_capabilities import DesiredCapabilities

class TestWysiwyg():
  def setup_method(self, method):
    self.driver = webdriver.Firefox()
    self.vars = {}
  
  def teardown_method(self, method):
    self.driver.quit()
  
  def test_wysiwyg(self):
    self.driver.get("https://the-internet.herokuapp.com/")
    self.driver.set_window_size(932, 903)
    self.driver.find_element(By.LINK_TEXT, "WYSIWYG Editor").click()
    self.driver.switch_to.frame(0)
    self.driver.find_element(By.CSS_SELECTOR, "html").click()
    self.driver.find_element(By.CSS_SELECTOR, "html").click()
    self.driver.switch_to.default_content()
    self.driver.find_element(By.CSS_SELECTOR, ".tox-mbtn:nth-child(1) > .tox-mbtn__select-label").click()
    self.driver.find_element(By.CSS_SELECTOR, ".tox-collection__item-label").click()
    self.driver.switch_to.frame(0)
    self.driver.find_element(By.CSS_SELECTOR, "html").click()
    element = self.driver.find_element(By.ID, "tinymce")
    self.driver.execute_script("if(arguments[0].contentEditable === 'true') {arguments[0].innerText = '<p>now im testing again<br data-mce-bogus=\"1\"></p><p><br data-mce-bogus=\"1\"></p>'}", element)
    self.driver.switch_to.default_content()
    self.driver.find_element(By.CSS_SELECTOR, ".tox-mbtn:nth-child(4) > .tox-mbtn__select-label").click()
    self.driver.find_element(By.CSS_SELECTOR, ".tox-collection__item--active > .tox-collection__item-label").click()
    self.driver.switch_to.frame(0)
    self.driver.find_element(By.CSS_SELECTOR, "html").click()
    self.driver.find_element(By.CSS_SELECTOR, "p:nth-child(1)").click()
    element = self.driver.find_element(By.ID, "tinymce")
    self.driver.execute_script("if(arguments[0].contentEditable === 'true') {arguments[0].innerText = '<p><br data-mce-bogus=\"1\"></p><p><em>italic</em><br data-mce-bogus=\"1\"></p>'}", element)
    self.driver.switch_to.default_content()
    self.driver.find_element(By.CSS_SELECTOR, ".tox-toolbar__group:nth-child(3) > .tox-tbtn:nth-child(1) svg").click()
    self.driver.switch_to.frame(0)
    self.driver.find_element(By.ID, "tinymce").send_keys("testing message")
    self.driver.find_element(By.ID, "tinymce").click()
    element = self.driver.find_element(By.ID, "tinymce")
    self.driver.execute_script("if(arguments[0].contentEditable === 'true') {arguments[0].innerText = '<p><strong>align middle<br data-mce-bogus=\"1\"></strong></p><p><em>italic</em><br data-mce-bogus=\"1\"></p>'}", element)
    self.driver.switch_to.default_content()
    self.driver.find_element(By.CSS_SELECTOR, ".tox-toolbar__group:nth-child(4) > .tox-tbtn:nth-child(2) svg").click()
    self.driver.close()
  
